#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;

    int guess;
    int guesses;
    int anwser;

    srand(time(0)); // seed

    // generate a rand num between MIN & MAX
    anwser = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > anwser)
        {
            printf("Too High\n");
        }
        else if (guess < anwser)
        {
            printf("Too Low\n");
        }
        else
        {
            printf("Correct!");
        }
        guesses++;
    } while (guess != anwser);

    printf("\n=================================================");
    printf("\nAnwser = %d", anwser);
    printf("\nGuesses = %d", guesses);
    printf("\n=================================================");

    return 0;
}