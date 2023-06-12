#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, userGuess, numGuesses = 0;

    srand(time(NULL));
    randomNumber = rand() % 100 + 1;

    printf("Guess the number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        numGuesses++;

        if (userGuess > randomNumber)
            printf("Too high. Try again.\n");
        else if (userGuess < randomNumber)
            printf("Too low. Try again.\n");
        else
            printf("Correct! You guessed the number in %d attempts.\n", numGuesses);
    } while (userGuess != randomNumber);

    return 0;
}