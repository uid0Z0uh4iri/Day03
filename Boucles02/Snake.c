#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  // For _kbhit() and _getch()
#include <windows.h> // For Sleep() (use <unistd.h> for Linux)

#define WIDTH 20
#define HEIGHT 10

// Direction constants
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

typedef struct {
    int x, y;
} Point;

void draw_board(Point snake[], int snake_length, Point food);
void move_snake(Point snake[], int *snake_length, int direction, Point *food, int *score);
int check_collision(Point snake[], int snake_length);
int check_food_collision(Point snake_head, Point food);
void generate_food(Point *food, Point snake[], int snake_length);

int main() {
    int direction = RIGHT;
    int snake_length = 3;
    Point snake[WIDTH * HEIGHT];
    Point food;
    int score = 0;
    int game_over = 0;

    // Initialize snake
    for (int i = 0; i < snake_length; i++) {
        snake[i].x = WIDTH / 2 - i;
        snake[i].y = HEIGHT / 2;
    }

    // Generate initial food
    generate_food(&food, snake, snake_length);

    while (!game_over) {
        // Draw the board
        draw_board(snake, snake_length, food);

        // Get user input
        if (_kbhit()) {
            char ch = _getch();
            switch (ch) {
                case 'w': if (direction != DOWN) direction = UP; break;
                case 's': if (direction != UP) direction = DOWN; break;
                case 'a': if (direction != RIGHT) direction = LEFT; break;
                case 'd': if (direction != LEFT) direction = RIGHT; break;
            }
        }

        // Move the snake
        move_snake(snake, &snake_length, direction, &food, &score);

        // Check for collisions
        game_over = check_collision(snake, snake_length);

        // Sleep for a short time to slow down the game
        Sleep(100); // Use Sleep(100) for Windows, usleep(100000) for Linux
    }

    // Game over message
    printf("Game Over! Your score: %d\n", score);
    return 0;
}

void draw_board(Point snake[], int snake_length, Point food) {
    system("cls"); // Clear the screen (use system("clear") for Linux)
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == 0 || x == WIDTH - 1 || y == 0 || y == HEIGHT - 1) {
                printf("#"); // Draw border
            } else if (x == food.x && y == food.y) {
                printf("*"); // Draw food
            } else {
                int is_snake = 0;
                for (int i = 0; i < snake_length; i++) {
                    if (snake[i].x == x && snake[i].y == y) {
                        printf("O"); // Draw snake
                        is_snake = 1;
                        break;
                    }
                }
                if (!is_snake) {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

void move_snake(Point snake[], int *snake_length, int direction, Point *food, int *score) {
    Point prev = snake[0];
    Point prev2;

    // Move the head of the snake
    switch (direction) {
        case UP:    snake[0].y--; break;
        case DOWN:  snake[0].y++; break;
        case LEFT:  snake[0].x--; break;
        case RIGHT: snake[0].x++; break;
    }

    // Move the rest of the snake
    for (int i = 1; i < *snake_length; i++) {
        prev2 = snake[i];
        snake[i] = prev;
        prev = prev2;
    }

    // Check if the snake has eaten the food
    if (check_food_collision(snake[0], *food)) {
        (*snake_length)++;
        generate_food(food, snake, *snake_length);
        (*score)++;
    }
}

int check_collision(Point snake[], int snake_length) {
    // Check for collision with walls
    if (snake[0].x <= 0 || snake[0].x >= WIDTH - 1 || snake[0].y <= 0 || snake[0].y >= HEIGHT - 1) {
        return 1;
    }

    // Check for collision with itself
    for (int i = 1; i < snake_length; i++) {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
            return 1;
        }
    }

    return 0;
}

int check_food_collision(Point snake_head, Point food) {
    return snake_head.x == food.x && snake_head.y == food.y;
}

void generate_food(Point *food, Point snake[], int snake_length) {
    int is_food_on_snake;
    do {
        is_food_on_snake = 0;
        food->x = rand() % (WIDTH - 2) + 1;
        food->y = rand() % (HEIGHT - 2) + 1;
        for (int i = 0; i < snake_length; i++) {
            if (food->x == snake[i].x && food->y == snake[i].y) {
                is_food_on_snake = 1;
                break;
            }
        }
    } while (is_food_on_snake);
}
