<h1 align="center">Snake Game in C++11</h1>

<p align="center">
  <strong>Snake Game</strong> is a classic arcade game implemented in C++11. It features a snake that grows longer as it eats apples. This version of the game introduces the exciting twist of having 3 apples, 3 sizes for boards, and 3 types of fruits, each offering different points. How high can you score?
</p>

## Features

- Play the classic Snake Game in your terminal.
- Control the snake using 'wsad'.
- Three board sizes to choose from: Small (20x20), Medium (30x30), and Large (40x40).
- Three types of fruits to collect: Apple, Pineapple, and Banana, each worth different points.
- Keep track of your current score and high score.

## Getting Started

### Prerequisites
- ncurses library
  - install on Ubuntu: `sudo apt-get install libncurses5-dev libncursesw5-dev`
  - install on macOS: `brew install ncurses`
- cmake
  - install on Ubuntu: `sudo apt-get install cmake`
  - install on macOS: `brew install cmake`
- In CmakeLists.txt link library with ncurses and tinfo
  - `target_link_libraries(Snake_Game ncurses tinfo)`

## How to play
1. Use the 'wsad' (↑ - w, ↓ - s, ← - a, → - d) to navigate the snake.
2. Eat the fruits (apples, pineapple, and bananas) to score points and make the snake grow longer.
3. Avoid running into walls or into the snake's own body.
4. Try to achieve the highest score possible!

## Contributing
Contributions are welcome! If you have any ideas, suggestions, or improvements, feel free to open an issue or submit a pull request.

## License
Distributed under the GPL License. See `LICENSE` for more information.