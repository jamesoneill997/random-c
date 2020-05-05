#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //initialise random number generator
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21;
    int guess;
    int remainingGuesses = 5;
    printf("%d\n", randomNumber);
    printf("This is a random number guessing game!\n");
    printf("The number is between 1 and 20. You have 5 guesses.\n");
    printf("Enter guess: ");
    scanf("%d",&guess);

    //game loop
    while (guess!= randomNumber && remainingGuesses>1){
        //If guess invalid, let user know, don't take away guess
        if (guess > 20 || guess < 1){
            printf("\nMake sure that your guess is between 1 and 20.\nYou have %d remaining guesses\nEnter guess: ", remainingGuesses);
            scanf("%d",&guess);
        }
        //valid incorrect guess
        else if(guess!=randomNumber){
            //remove guess for all cases
            remainingGuesses--;
            if(guess < randomNumber){
                printf("\nIncorrect, try higher!\nYou have %d remaining guesses.\nEnter guess: ",remainingGuesses);
            }
            else if(guess > randomNumber){
                printf("\nIncorrect, try lower!\nYou have %d remaining guesses.\nEnter guess: ",remainingGuesses);
            }
            scanf("%i",&guess);
            
        }
    }
    
    //results
    if (guess == randomNumber &&remainingGuesses > 0){
        printf("\n Correct, great job!\n");
    }
    else{
        printf("\nBetter luck next time!\n");
    }
}