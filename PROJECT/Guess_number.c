#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 10 + 1;
    // printf("The Number is %d", number);

    do
    {
        printf("Guess the number between 1 to 10\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please\n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}