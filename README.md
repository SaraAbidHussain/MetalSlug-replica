
# 🎮 Metal Slug Replica (C++ & Raylib)

A modern take on the classic **Metal Slug** arcade game — a side-scrolling, run-and-gun shooter built entirely in **C++** using **Raylib**. This project follows a modular architecture, separating gameplay components like enemies, bullets, player controls, and game states into maintainable C++ classes.

---

## 💪 Features

- ⚔️ Side-scrolling shooter action with classic run-and-gun mechanics  
- 🧠 Enemy AI with varied behaviors (ground and aerial)  
- 🎯 Bullet firing and collision detection (bullets vs enemies, player vs enemies, etc.)  
- 🎮 Player movement, jumping, and shooting  
- 📺 Multiple game states: Menu, Playing, Paused, and Game Over  
- 🔁 Modular C++ structure with clear `.cpp` and `.h` file pairs  
- 🖼️ External asset folder for sprites, sounds, and more  

---

## 🛠️ Requirements

- C++17 or newer  
- Raylib 4.5 or later  

---

## 📄 How to Download & Run

### 1. Install Raylib

**macOS** (Homebrew):
```bash
brew install raylib
```
**Ubuntu** 
```bash
sudo apt install libraylib-dev
```
**Windows** <br>
Download Raylib from https://www.raylib.com/
Follow the setup instructions for MinGW or MSVC.

### 2. Clone the repository
You can clone or download as ZIP using the green Code button.

### 3. Compile and Run
Use your preferred compiler to compile all .cpp files. On Windows, make sure to link Raylib correctly depending on your compiler before running the game. 

## 📁 Folder Structure
Final Metal Slug/
├── assets/                # Sprites, sounds, etc.<br>
├── Bullet.cpp/h<br>
├── Enemy.cpp/h<br>
├── Game.cpp/h<br>
├── GameObject.cpp/h<br>
├── GameState.cpp/h<br>
├── GroundEnemy.cpp/h<br>
├── Level.cpp/h<br>
├── Player.cpp/h<br>
├── SkyEnemy.cpp/h<br>
├── SkyEnemyBullet.cpp/h<br>
├── MAIN.cpp              # Entry point<br>
└── README.md<br>

## Credits
Developed by *Sara Abid*
[GitHub Profile](https://github.com/SaraAbidHussain)


Special thanks to the Raylib community and the creators of Metal Slug for inspiration and reference.

