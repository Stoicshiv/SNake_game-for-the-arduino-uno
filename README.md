# Dynamic Snake Game on Arduino

The **Dynamic Snake Game** brings the classic snake game to life on the Arduino platform, using a Serial Monitor for display. This lightweight implementation demonstrates real-time movement, user interaction, and basic game mechanics, all rendered dynamically in a text-based grid.

## Features

### 1. Real-Time Grid Update
- The grid is displayed dynamically in the Serial Monitor, showing the snake's movement and food's position.

### 2. Continuous Movement
- The snake automatically moves in the current direction every cycle.

### 3. User Interaction
- Players can steer the snake dynamically using `w` (up), `a` (left), `s` (down), and `d` (right) keys.

### 4. Food Mechanics
- Food is randomly placed in the grid. The snake "eats" the food when it reaches the food's position, triggering a new food placement.

### 5. Collision Detection
- The game ends if the snake hits the grid's walls, displaying a **Game Over** message.

## Components Used

- **Arduino Uno**
- USB Cable for communication
- Computer with Arduino IDE installed

## How to Play

1. **Upload the Code:**
   - Use the Arduino IDE to upload the provided sketch to your Arduino Uno.

2. **Open Serial Monitor:**
   - Set the baud rate to **9600**.

3. **Control the Snake:**
   - Use the keyboard keys:
     - `w` to move up
     - `a` to move left
     - `s` to move down
     - `d` to move right

4. **Objective:**
   - Guide the snake to eat the food (`F`), displayed in the grid as dots (`.`), while avoiding collisions with the walls.

## Game Mechanics

- **Grid Dimensions:**
  - 10x10 text-based grid displayed in the Serial Monitor.

- **Snake Movement:**
  - Automatically moves in the current direction every cycle.

- **Food Positioning:**
  - Randomly placed within the grid.

- **Collision Detection:**
  - Game ends if the snake moves out of bounds.

## Example Serial Monitor Output

```
Time: 0 seconds
..........  
..F.......  
..........  
..........  
..........  
.....S....  
..........  
..........  
..........  
..........  

Use W/A/S/D to change direction.
```

## Code Explanation

The program uses:

- **Grid Representation:**
  - A 2D grid rendered dynamically on the Serial Monitor.

- **Movement Logic:**
  - Snake's position updates based on the current direction (`w`, `a`, `s`, `d`).

- **Collision Detection:**
  - Boundary checks ensure the snake stays within the grid.

- **Food Mechanics:**
  - Random placement of food when consumed by the snake.

## Potential Enhancements

- **Growing Snake:**
  - Implement snake growth when food is eaten.

- **Score Tracking:**
  - Add a score counter to track the player's progress.

- **Obstacles:**
  - Introduce obstacles to increase the difficulty level.

## Contribution

Contributions are welcome! Here’s how you can help:

1. **Feature Development:**
   - Add new features like obstacles, snake growth, or score tracking.

2. **Optimization:**
   - Refactor the code for better performance and scalability.

3. **Bug Fixes:**
   - Identify and fix bugs or improve collision detection.

4. **Documentation:**
   - Enhance this README or add tutorials for beginners.

## License

This project is open-source and free to use for educational and personal purposes.

