
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// (Height,Width)
#define Height 20
#define Width 40

// Array to store the coordinates of snake
// tail (x, y)
int snakeTailX[100], snakeTailY[100];

// snake's taild
int snakeTailLen;

// Score and signal flags
int gameover, key, score;

// Coordinates of snake's head and food
int x, y, foodx, foody;

// Function to generate the food

void setup() {
    
    // Flag to signal the gameover
    gameover = 0;

    // Initial coordinates of the snake
    x = Width / 2;
    y = Height / 2;
    
    // Initial coordinates of the food
    foodx = rand() % Width;
    foody = rand() % Height;
    while (foodx == 0)
        foodx = rand() % Width;

    while (foody == 0)
        foody = rand() % Height;

    
    score = 0;
}

// Function to draw the game field, snake and food
void draw() {
    system("cls");

    
    // Top wall
    for (int i = 0; i < Width + 2; i++)
        printf("-");
    printf("\n");
    
    for (int i = 0; i < Height; i++) {
        for (int j = 0; j <= Width; j++) {

            //Side walls(|)
            if (j == 0 || j == Width)
                printf("|");
            
            // snake's head ('O')
            if (i == y && j == x)
                printf("O");
            
            //  sanke's food ('*')
            else if (i == foody && j == foodx)
                printf("*");
            
            // snake's body ('o')
            else {
                int prTail = 0;
                for (int k = 0; k < snakeTailLen; k++) {
                    if (snakeTailX[k] == j
                        && snakeTailY[k] == i) {
                        printf("o");
                        prTail = 1;
                    }
                }
                if (!prTail)
                    printf(" ");
            }
        }
      printf("\n");
            
    }    
    
    for (int i = 0; i < Width + 2; i++)
        printf("-");
     printf("\n");

    
    printf("score = %d", score);
    printf("\n");
    printf("Press Up Arrow, Down Arrow, Left Arrow, and Right Arrow for movement.\n");
    printf("Press X to quit the game.");
}


void input() {
    if (kbhit()) {
        int ch = getch();

        if (ch == 0 || ch == 224) {  // Arrow keys start with these
            ch = getch();            // Get the actual code
            switch (ch) {
                case 75:  // Left Arrow
                    if (key != 2)
                        key = 1;
                    break;

                case 77:  // Right Arrow
                    if (key != 1)
                        key = 2;
                    break;

                case 72:  // Up Arrow
                    if (key != 4)
                        key = 3;
                    break;

                case 80:  // Down Arrow
                    if (key != 3)
                        key = 4;
                    break;
            }
        } 
        else if (tolower(ch) == 'x') {  // Press 'x' to quit
            gameover = 1;
        }
    }
}


void logic() {
    
    
    int prevX = snakeTailX[0];
    int prevY = snakeTailY[0];
    int prev2X, prev2Y;
    snakeTailX[0] = x;
    snakeTailY[0] = y;
    for (int i = 1; i < snakeTailLen; i++) {
        prev2X = snakeTailX[i];
        prev2Y = snakeTailY[i];
        snakeTailX[i] = prevX;
        snakeTailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    
    
    switch (key) {
    case 1:
        x--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y--;
        break;
     case 4:
        y++;
        break;
    default:
        break;
    } 

    
      if (x < 0 || x >= Width || y < 0 || y >= Height)
         gameover = 1 ;
        
    
    for (int i = 0; i < snakeTailLen; i++) {
        if (snakeTailX[i] == x && snakeTailY[i] == y)
            gameover = 1;
    }

    // If snake reaches the food
    // then update the score
    if (x == foodx && y == foody) {
        foodx = rand() % Width;
        foody = rand() % Height;
        while (foodx == 0)
            foodx = rand() % Width;

        // Generate new food
        while (foody == 0)
            foody = rand() % Height;
        score += 10;
         snakeTailLen++;
    }
}

void main() {
  
    
    setup();

    // game loop starts here
    while (!gameover) {

        
        draw();
        input();
        logic();
        Sleep(50);
    }

}
