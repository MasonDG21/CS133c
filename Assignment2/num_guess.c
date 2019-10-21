#include <stdio.h>
//For our random number generator we need to
//include the following headers
#include <stdlib.h>
//time.h provides us with various functions
//for manipulating date & time
#include <time.h>

int main(void) 
{
    //Below i use the function srand(x) to decide the starting number
    //(time(NULL)) captures the time from the users machine
    //and since time is always changing so is the starting number
    //of my random number generator
    //srand(time(NULL));

    //next i set the range for our random number
    //this creates a random int within the range of 1 and 10
    //in class we learned the % operator is used for capturing the remainder after integer division
    //rand() % 10 + 1; psuedo ranom number between 1 and 10
    //int p1_pick = 0;

    
    int p1_pick;
    char play_again = 'y';
    int p2_guess;
    int num_guesses = 3;
    int game_over = 0;
    //int counter = 0;

    printf("Player 1 pick a secret number between 1 and 10: ");
    scanf("%d", &p1_pick);

    printf("\nPlayer 2 -->\n");
    printf("You have %d guesses.\n", num_guesses );
    printf("Guess Player 1's number between 1 and 10: ");

    do
    {

        scanf("%d", &p2_guess);
        if (p2_guess == p1_pick)
        { 
            printf("You guessed correctly %d tries left! Congratulations!\n", num_guesses);
            //printf("EYES: %d", num_guesses);

            //it is not returning the desired value here?? expected output when 'y' is entered is to repeat the loop.
            //expected output for n is to end the game. actual output is hard to explai 
            printf("\nWould you like to play again? (y/n): ");
            scanf(" %c", &play_again);

            if (play_again == 'n')
            {
                exit(0);
            }
            else
            {
                continue;
            }
            
        }

        else if (p2_guess < p1_pick)
        {
            //counter++;
            num_guesses = num_guesses - 1;
            printf("Player 2, you have %d guesses left.\n", num_guesses);//Here we tell the user how many trys they have left.
            if (num_guesses == game_over)
            {
                printf("You have failed.\n");
                printf("\nWould you like to play again? (y/n): ");
                scanf("%c", play_again);
            }
            else
            {
                printf("Your guess is too LOW. \nGuess again: ");
            }

        }

        else if (p2_guess > p1_pick)
        {
            //counter++;
            num_guesses = num_guesses - 1;
            printf("Player 2 you have %d guesses left\n", num_guesses);
            //When I ask the user to play again i expect to see the print statement and then wait for the user
            //to enter their answer. but the program just quits automatically.
            //Since game over = 0, and num_guesses decreases by one each time player 2 enters a guess. we can tell the
            // code to stop running or continue running.
            if (num_guesses == game_over)
            {
                printf("You have failed\n");
                printf("\nWould you like to play again? (y/n): ");
                scanf("%c", play_again);
            }
            else
            {
                printf("Your guess is too HIGH. \nGuess again: ");
            }
        }

        }while (play_again == 'y');//This ensures the code runs until the value of the char play_again is equal to 'n'
    return 0;
}