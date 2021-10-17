# Calculator in C
## About
I got bored, so I made a calculator in C.
## Compiling
### On Windows
- Install [MSVC 2017](https://aka.ms/vs/15/release/VC_redist.x64.exe) or later:
- Run `cl calculator.c`
### On Linux
- Install GCC:
	- On Debian-Based Distros: `sudo apt install gcc`\
	- On Arch Linux: `sudo pacman -S gcc`\
	- On Red Hat and Fedora Linux: `sudo yum install gcc -y`
- Run `gcc ./calculator.c -o ./calculator`
## Precompiled Executables
- You can find them in the "./bin/" folder.\
- Or at [the releases page](https://github.com/codedipper/calculator-c/tags).
## Notes
- I couldn't test the Windows executables on a real machine, I just used Wine.
- The requirements or steps for building might be wrong.
