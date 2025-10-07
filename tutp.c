#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed random number generator
    srand(time(0));
    number = rand() % 100 + 1; // random number between 1 to 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100:\n");

    // Keep asking until the guess is correct
    do {
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Lower number please\n");
        } else if (guess < number) {
            printf("Higher number please\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
