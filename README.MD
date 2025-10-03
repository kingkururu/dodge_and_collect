# Dodge and Collect 

A 2D dodge and collect game built with C++ and SFML, featuring dynamic sprite animations and simple gameplay mechanics.
- **SFML**: https://github.com/SFML/SFML 

## GAME PLAY SCREENSHOTS

![Gameplay Screenshot](https://github.com/kingkururu/dodge_and_collect_sfml_game/blob/7048d6198fbc1bb4d38b9a0891bf4af93c9bfefd/readmescreenshot/screenshot1.png)
![Gameplay Screenshot 2](https://github.com/kingkururu/dodge_and_collect_sfml_game/blob/7048d6198fbc1bb4d38b9a0891bf4af93c9bfefd/readmescreenshot/Screenshot2.png)
![Gameplay Screenshot 3](https://github.com/kingkururu/dodge_and_collect_sfml_game/blob/7048d6198fbc1bb4d38b9a0891bf4af93c9bfefd/readmescreenshot/screenshot3.png)

## Objective

Collect as many coins as possible while avoiding falling rain and lightning bolts. You start with 5 hearts, and the challenge intensifies as the game progresses with decreasing spawn intervals!

## How to Play

- **Movement**: Use `A` key to move left, `D` key to move right
- **Goal**: Collect coins (100 points each) while avoiding obstacles
- **Health System**: 
  - Start with 5 hearts
  - Rain hits: -1 heart
  - Lightning strikes: -3 hearts
- **Restart**: Press `B` after game over to play again

## Technical Features

- **Architecture**: Object-oriented design with sprite animation system
- **Physics**: Custom collision detection and entity management (AABB only)
- **Sprites**: Animated character sprites with frame-based animation

## Building & Running

### Prerequisites
- SFML 2.x library
- C++ compiler (GCC/Clang)
- Make

### Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/kingkururu/dodge_and_collect
   cd dodge_and_collect (location will be different)
   ```

2. **Build the game**:
   ```bash
   make
   ```

3. **Run the game**:
   ```bash
   ./run
   ```

### Alternative Setup (macOS with Homebrew)

1. **Install SFML**:
   ```bash
   # Install Homebrew if not already installed
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   
   # Install SFML
   brew install sfml@2
   ```

2. **Configure PATH** (add to ~/.zshrc or ~/.bash_profile):
   ```bash
   export PATH="/opt/homebrew/bin:$PATH"
   export PATH="/opt/homebrew/opt/sfml@2/bin:$PATH"
   ```

## Project Structure

```
dodge_and_collect_sfml_game/
├── assets/        # Game assets 
├── game/          # Core logics
├── main           # Entry point
├── .gitignore     
├── ReadMe         
└── Makefile       # Build configuration
```

## Assets

### Sprites
- **Main player sprite**: [Free Pixel Art Tiny Hero Sprites](https://craftpix.net/freebies/free-pixel-art-tiny-hero-sprites/)
- **Coin sprite**: [Golden Coin with Star Icon](https://www.vecteezy.com/vector-art/2695182-golden-coin-with-star-icon-in-pixel-style-vector-illustration)
- **Lightning sprite**: [Free Animated Explosion Sprite Pack](https://craftpix.net/freebies/free-animated-explosion-sprite-pack/?num=1&count=21&sq=lightning&pos=6)

### Sound Effects
- **Lightning sound**: [Thunder Sound Effect](https://freesound.org/people/newlocknew/sounds/696391/)
- **Coin sound**: [Coin Collection Sound](https://freesound.org/people/LoafDV/sounds/554803/)
- **Raindrop sound**: [Rain Drop Sound](https://freesound.org/people/rombart/sounds/186747/)
- **Player dead sound**: [Game Over Sound](https://freesound.org/people/Khrinx/sounds/333694/)
- **Background music**: [8-bit Gaming Music](https://pixabay.com/music/video-games-flat-8-bit-gaming-music-instrumental-211547/)

### Font
- **Arial font**: [Arial Font](https://font.download/font/arial)

## Key Learning Outcomes

- Game development fundamentals with SFML
- Object-oriented programming in C++
- 2D graphics rendering and sprite management
- Real-time input handling and game loops
- Collision detection algorithms
- Audio system integration
- Sprite animation and frame management
