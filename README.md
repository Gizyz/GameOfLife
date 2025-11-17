# GameOfLife – Installation & Build Guide (Ubuntu)

This guide explains how to install dependencies and build the **GameOfLife** project on Ubuntu using **CMake**.  
All required C++ libraries (**SFML**, **ImGui**, **fmt**) are fetched automatically using **CMake FetchContent**—no vcpkg or system-level library installation is required except for SFML's native Linux dependencies.

---

## 1. System Requirements

You will need:

- Ubuntu 22.04 or later (or compatible)
- A C++20-capable compiler (GCC 11+)
- CMake 3.22+
- Git

---

## 2. Install Required System Libraries

These are low-level libraries used by **SFML** on Linux (windowing, fonts, audio, input, etc.).  
These are *not* SFML itself—they are dependencies.

Run:

```bash
sudo apt update
sudo apt install -y build-essential cmake git ninja-build pkg-config \
                    libx11-dev libxrandr-dev libxinerama-dev libxcursor-dev libxi-dev \
                    libudev-dev libopenal-dev libfreetype6-dev libflac-dev \
                    libvorbis-dev libogg-dev libpulse-dev

```

## 3. Build commands
```bash
cmake --preset windows-mingw-release
cmake --build --preset build-windows-release

```
