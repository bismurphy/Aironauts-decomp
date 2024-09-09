# It appears that this game does not use ASPSX. Therefore, it does not need the
# translations performed by maspsx. This script is an extremely simple "cleanup" which
# inherits some of the most basic logic from maspsx, but does away with all the
# transformations. Mostly, we just filter out some of the noise from GCC before
# passing it on to the assembler.

import sys
 
def expand_move(line: str):
    op, *rest = line.split()
    if op == "move":
        args = " ".join(rest)
        r_dest, r_source = args.split(",")
        return f"addu\t{r_dest},{r_source},$zero\n"
    return line

in_lines = sys.stdin.readlines()

out_lines = []
for line in in_lines:
    line = line.lstrip()
    if (line.startswith(".def")
    or line.startswith(".begin")
    or line.startswith(".bend")
    ):
        continue

    if line.startswith("LM"): # skip LM labels which break instruction splitting
        continue
    
    if line.startswith("move"):
        line = expand_move(line)
    out_lines.append(line)

print("".join(out_lines))