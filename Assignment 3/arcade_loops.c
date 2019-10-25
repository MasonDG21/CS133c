/*
Assignment 3 -- 
<arcade_loops.c>
Mason Galyon

Given the number of coupons a user has, print the number of candy_bars and gumballs they will recieve
if they use their coupons on candy_bars first and then gumballs and then gets the remaining # of coupons
returned.
*/

#include <stdio.h>
//defining my variables
char play_again;
int num_coupons;
int c_candy_bar = 10;
int c_gumball = 3;



int main()
{
    do 
    {
        printf("Player Enter the number of coupons you have: ");
        scanf("%d", &num_coupons);
        //We need to do some math to get the number of candy bars, gumballs, and remaining coupons.
        int num_candy_bar = num_coupons / c_candy_bar;
        //modulo will capture the remainder.
        int coupons_left = num_coupons % c_candy_bar;
        //We use the remainder to find the num_gumballs the user gets
        int num_gumball = coupons_left / c_gumball;
        //this will calculate the users remaing coupons.
        int receipt = coupons_left - c_gumball;

        printf("\nPlayer You Have: %d Coupons\n\n", num_coupons);
        printf("::PRICES::\n");
        printf("::Candybars:: %d\n", c_candy_bar);
        printf("::Gumballs:: %d\n\n", c_gumball);
        printf("Player You Get:\n");
        printf("CANDYBARS:: %d\n", num_candy_bar);
        printf("GUMBALLS:: %d\n\n", num_gumball);
        printf("---------------------\n");
        printf("REMAING COUPONS:: %d", receipt);//I was having trouble here getting my print statement to print correctly. Below is some testing to show my expected vs actual outputs.
        //(e.g.: input      ::     Expected Output                ::       Actual Output
        //       23 coupons ::2Candybars, 1gumball, 0coupons_left :: 2candybars, 1gumball, 0coupons_left
        //       26 coupons ::2Candybars, 2gumball, 0coupons_left :: 2candybars, 2gumball, 3coupons_left
        //       29 coupons ::2candybars, 3gumball, 0coupons_left :: 2candybars, 2gumball, 6coupons left
        
        printf("\nDo you want to redeem More Coupons (y/n): ");
        play_again = getchar();
        getchar();
        //play_again = getchar();
    } while(play_again != 'n' || play_again != 'N' && play_again == 'y' || play_again == 'Y');

    if (play_again != 'y' || play_again != 'Y')
    {
        printf("\nThanks for Coming to Arcade Loops!\n\nSee You Next Time!");
    }
    return 0;
}