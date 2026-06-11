# Ping-Pong

A two-player Pong clone for the Windows console, written in C back in school (2006/2007). It draws the court with CP437 box characters, beeps through the PC speaker, and is genuinely playable on the same keyboard.

```
≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡
                      ▒
 █                    ▒
 █                    ▒                     █
 █          O         ▒                     █
 █                    ▒                     █
                      ▒
≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡≡
```

First to 10 points wins.

## Controls

|            | Player 1 (left) | Player 2 (right) |
| ---------- | --------------- | ---------------- |
| Up / Down  | Arrow keys      | `W` / `S`        |
| Left/Right | Arrow keys      | `A` / `D`        |

`P` pauses, `Esc` quits the match back to the menu.

## Dependencies

None beyond Windows itself — the game uses only the Win32 console API (`windows.h`) and `conio.h`. You just need a C compiler that targets Windows:

- **MinGW-w64** (recommended): `gcc` from [w64devkit](https://github.com/skeeto/w64devkit), MSYS2 (`pacman -S mingw-w64-ucrt-x86_64-gcc`), or your distro's `mingw-w64` package for cross-compiling.
- **MSVC** also works (`cl`).

It will not build natively on Linux/macOS; there is no SDL/ncurses port.

## Building

```sh
# Windows (MinGW)
gcc ping-pong.c -o ping-pong.exe

# Cross-compiling from Linux (then run with Wine)
x86_64-w64-mingw32-gcc ping-pong.c -o ping-pong.exe
```

Only `ping-pong.c` is compiled; `draw.h` is included by it. Run from a classic console window (conhost or Windows Terminal) sized at least 80×26.

With MSVC: `cl ping-pong.c /Fe:ping-pong.exe`.

## Project layout

- `ping-pong.c` — game loop, input, physics, scoring
- `draw.h` — menu screens, scoreboard digits, and ASCII art
- `extra.h`, `Noname1.cpp` — old scratch files, not part of the build
- `ping-pong.dsp` / `.dsw` — original Visual C++ 6 project files, kept for posterity

## Notes

- Sound comes from `Beep()`, which can be silent on some modern machines/VMs.
- The PC-speaker countdown and score screens block for a few seconds by design.
