ASM_DIR         := asm
BIN_DIR         := bin
SRC_DIR         := src
BUILD_DIR       := build
TOOLS_DIR       := tools
CONFIG_DIR      := config



CROSS           := mipsel-linux-gnu-
OBJCOPY         := $(CROSS)objcopy
AS              := $(CROSS)as
AS_FLAGS        += -Iinclude -march=r3000 -mtune=r3000 -no-pad-sections -O2 -G0

CPP             := $(CROSS)cpp
CPP_FLAGS       += -Iinclude -undef -Wall -fno-builtin
CPP_FLAGS       += -Dmips -D__GNUC__=2 -D__OPTIMIZE__ -D__mips__ -D__mips -Dpsx -D__psx__ -D__psx -D_PSYQ -D__EXTENSIONS__ -D_MIPSEL -D_LANGUAGE_C -DLANGUAGE_C -DNO_LOGS -DHACKS -DUSE_INCLUDE_ASM

CC28          := ./bin/cc1-gcc2.8.1-psx
CC27            := ./bin/cc1-gcc2.7.2-psx
CC_FLAGS        += -G0 -w -O2 -funsigned-char -fpeephole -ffunction-cse -fpcc-struct-return -fcommon -fverbose-asm -msoft-float -g
PSXCC_FLAGS     := -quiet -mcpu=3000 -fgnu-linker -mgas -gcoff

LD              := $(CROSS)ld
LD_FLAGS        := -nostdlib --no-check-sections



PYTHON          := python3
MENOSPSX_DIR      := $(TOOLS_DIR)/menospsx
MENOSPSX_APP      := $(MENOSPSX_DIR)/menospsx.py
MENOSPSX          := $(PYTHON) $(MENOSPSX_APP) --expand-div --aspsx-version=2.81

PSX_BASE_SYMS	:= $(CONFIG_DIR)/symbols.txt

SPLAT           := splat split

TARGETS         := outroe


define list_src_files
	$(foreach dir,$(ASM_DIR)/$(1),$(wildcard $(dir)/**.s))
	$(foreach dir,$(ASM_DIR)/$(1)/data,$(wildcard $(dir)/**.s))
	$(foreach dir,$(SRC_DIR)/$(1),$(wildcard $(dir)/**.c))
endef

define list_o_files
	$(info O file argument: $(1))
	$(eval FILES := $(foreach file,$(call list_src_files,$(1)),$(BUILD_DIR)/$(file).o))
	$(info O files found: $(FILES))
	$(FILES)
endef

define link
	$(info Linking: $(1) /// $(2) /// $(LD) /// $(LD_FLAGS))
	$(LD) $(LD_FLAGS) -o $(2) \
		-Map $(BUILD_DIR)/$(1).map \
		-T $(BUILD_DIR)/$(1).ld \
		-T $(CONFIG_DIR)/undefined_syms.txt \
		-T $(CONFIG_DIR)/undefined_syms_auto.txt\
		-T $(CONFIG_DIR)/undefined_syms_auto.$(1).txt
endef

outroe: $(BUILD_DIR)/outroe.exe

$(BUILD_DIR)/outroe.exe: $(BUILD_DIR)/outroe.elf
	$(OBJCOPY) -O binary $< $@

.SECONDEXPANSION: # need second expansion to allow wildcard prereq in "call"
$(BUILD_DIR)/%.elf: $$(call list_o_files,%)
	$(call link,$*,$@)

$(BUILD_DIR)/%.s.o: %.s
	mkdir -p $(dir $@)
	$(AS) $(AS_FLAGS) -o $@ $<

# Object files that need to be built with GCC 2.7 instead of GCC 2.8
NEEDS_GCC_27 = $(BUILD_DIR)/src/outroe/1AC9CC.c.o $(BUILD_DIR)/src/outroe/1AD46C.c.o
CC = $(if $(filter $@,$(NEEDS_GCC_27)), $(CC27), $(CC28))

# Rule to build object files
$(BUILD_DIR)/%.c.o: %.c $(MENOSPSX_APP)
	mkdir -p $(dir $@)
	$(CPP) $(CPP_FLAGS) -lang-c $< | $(CC) $(CC_FLAGS) $(PSXCC_FLAGS) | $(MENOSPSX) | $(AS) $(AS_FLAGS) -o $@

# putting this in causes make to not delete the intermediate .o files.
SECONDARY: $(call list_o_files,outroe)

$(BUILD_DIR)/%.ld: $(CONFIG_DIR)/splat.%.yaml 
	$(SPLAT) $<

tools/mkpsxiso/build/dumpsxiso:
	cd tools/mkpsxiso && git submodule update --init --recursive && cmake -S . --preset release && cmake --build ./build --config Release

extract_disk: tools/mkpsxiso/build/dumpsxiso
	mkdir -p EXTRACTED
	cd Game && ../tools/mkpsxiso/build/dumpsxiso Aironauts\ \(Europe\)\ \(En\,Fr\,De\).cue -x ../EXTRACTED

extract: $(addprefix $(BUILD_DIR)/,$(addsuffix .ld,$(TARGETS)))
	$(info Extraction Complete.)

clean:
	rm -rf asm
	rm -rf build

deepclean: clean
	rm -rf expected

all: build check

build: outroe

check: config/checksums.sha
	sha1sum --check $<

init: deepclean extract build check
	mkdir -p expected/build
	cp -r build expected

refresh: clean extract all

.PHONY: extract