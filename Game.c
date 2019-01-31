//purpose: a game where a random number is produced between 1 and 10
//user must guess what the number is until they are correct
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    srand(time(NULL));
    const bound1 = 10;
    const bound2 = 1;
    int guess;
    int number = rand() % bound1 + bound2;
    
    printf("Enter a guess between %d and %d!: ", bound2, bound1);
    scanf("%d", &guess);
    
    if (guess <= 0){
        printf("Invalid input!\n");
        return 0;
    }

    while (guess < number || guess > number) {
        if (guess < number){
            printf("Too low! Guess again!\n");
            scanf("%d", &guess);
        } else {
            printf("Too high!\n");
            scanf("%d", &guess);
        }
    }
    
    if (guess == number) {
        printf("You win!\n");
    }
    
    return 0;
}