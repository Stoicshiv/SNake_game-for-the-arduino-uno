const int gridWidth = 10;    // Width of the grid
const int gridHeight = 10;   // Height of the grid

int snakeX = 5;              // Snake's initial X position
int snakeY = 5;              // Snake's initial Y position
int foodX = 2;               // Food's initial X position
int foodY = 3;               // Food's initial Y position

char direction = 'd';        // Initial direction (d = right)
bool gameOver = false;       // Game over flag

void setup() {
  Serial.begin(9600);        // Initialize Serial Monitor
  Serial.println("Snake Game!");
  Serial.println("Use W/A/S/D to change direction.");
  generateFood();            // Place initial food
}

void loop() {
  if (!gameOver) {
    if (Serial.available() > 0) {
      char input = Serial.read();  // Read player input
      if (isValidDirection(input)) {
        direction = input;         // Update direction
      }
    }

    // Move the snake
    moveSnake();

    // Check for collisions
    if (checkCollision()) {
      Serial.println("Game Over! The snake hit the wall.");
      gameOver = true;
    }

    // Check if the snake eats food
    if (snakeX == foodX && snakeY == foodY) {
      Serial.println("Yum! Snake ate the food!");
      generateFood();              // Generate new food position
    }

    // Draw the updated grid
    drawGrid();

    delay(500); // Refresh rate (500 ms)
  }
}

// Draw the grid dynamically
void drawGrid() {
  Serial.println();
  for (int y = 0; y < gridHeight; y++) {
    for (int x = 0; x < gridWidth; x++) {
      if (x == snakeX && y == snakeY) {
        Serial.print('S');  // Snake's position
      } else if (x == foodX && y == foodY) {
        Serial.print('F');  // Food's position
      } else {
        Serial.print('.');  // Empty space
      }
    }
    Serial.println();
  }
  Serial.println();
}

// Move the snake based on the current direction
void moveSnake() {
  switch (direction) {
    case 'w': snakeY--; break; // Move up
    case 's': snakeY++; break; // Move down
    case 'a': snakeX--; break; // Move left
    case 'd': snakeX++; break; // Move right
  }
}

// Check if the snake hits the walls
bool checkCollision() {
  return (snakeX < 0 || snakeX >= gridWidth || snakeY < 0 || snakeY >= gridHeight);
}

// Generate random position for food
void generateFood() {
  foodX = random(0, gridWidth);
  foodY = random(0, gridHeight);
}

// Validate direction change (no 180-degree turns)
bool isValidDirection(char input) {
  return (input == 'w' && direction != 's') || // Up
         (input == 's' && direction != 'w') || // Down
         (input == 'a' && direction != 'd') || // Left
         (input == 'd' && direction != 'a');   // Right
}
