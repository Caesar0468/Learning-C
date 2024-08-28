//
//  main.c
//  C Guessing Game
//
//  Created by Tejas Kshirsagar on 28/08/24.
//

#include <stdio.h>
//Number Guessing Game
int main(void) {
    // Number to Guess is 13
    int secretNumber = 13;
    int guess;
    int GuessCount = 0;
    int GuessLimit = 3;
    int OutofGuesses = 0;
    
    while (guess!= secretNumber && OutofGuesses == 0) {
        if (GuessCount < GuessLimit){
            printf("Guess a number: ");
            scanf("%d", &guess);
            GuessCount++ ;
            
        }
        else {
            OutofGuesses = 1;
        }
    }
        
        if(OutofGuesses == 1){
            printf("Out of Guesses\n");
        }
        else{
            printf("You guessed the correct number!\n");
        }
        
        return 0;
    
}

