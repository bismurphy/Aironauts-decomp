A very early-stage decompilation for the 1999 Playstation game Aironauts (PAL-only). This only includes the OUTROE.exe executable, and may never include any other part of the game.

Most of the build process is inherited from `sotn-decomp`. Thank you to that team :)

Right now, I'm focusing on the SDK and decompiling its functions, from there we will be able to better understand the remaining functions. Again, lots of the SDK is coming from SOTN Decomp, with changes to reflect the different SDK version used on this game.

I would love to talk to anyone about any thoughts or questions they have (especially if you have trouble setting up the repo!!!). Discussions are enabled on this repo for discussing anything.


Setup process:

1) Clone this repo, and then cd into it.
2) Run `git submodule update --init --recursive` to populate the submodules used as tools (actually maybe not needed).
3) cd into the "tools" directory, and clone this repo: git@github.com:N4gtan/mkpsxiso.git. Then, cd into `mkpsxiso`, and do `git checkout cue`.
- This is necessary because mkpsxiso does not natively support Cue files; N4gtan's version does (and is currently a PR into the main software), so we use theirs while we wait for the PR to be merged).
3) Take your copy of Aironauts, and put it in the Game directory. There should be a Cue file and four Bin files.
4) In the root of this repository, run `make extract_disk`. This should compile mkpsxiso and then use it to extract the game files into the EXTRACTED directory.
5) Run `make extract` to extract the internal asm/data/etc from the game executables. Currently, this only operates on OUTROE.EXE.
6) Run `make all` to attempt to re-compile the source files to re-create the game EXE. If it succeeds, you should see "build/outroe.exe: OK" in your terminal.
