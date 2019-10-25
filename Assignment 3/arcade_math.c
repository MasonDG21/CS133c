/*
Assignment 3 -- 
<arcade_math.c>
Mason Galyon

Given the number of coupons a user has, print the number of candy_bars and gumballs they will recieve
if they use their coupons on candy_bars first and then gumballs and then gets the remaining # of coupons
returned.
*/

#include <stdio.h>
//defining my variables
int num_coupons = 53;
int c_candy_bar = 10;
int c_gumball = 3;



int main()
{
    //We need to do some math to get the number of candy bars, gumballs, and remaining coupons.
    int num_candy_bar = num_coupons / c_candy_bar;
    //modulo will capture the remainder.
    int coupons_left = num_coupons % c_candy_bar;
    //We use the remainder to find the num_gumballs the user gets
    int num_gumball = coupons_left / c_gumball;
    //this will calculate the users remaing coupons.
    int receipt = coupons_left - c_gumball;

    printf("Player You Have: %d Coupons\n\n", num_coupons);
    printf("::PRICES::\n");
    printf("::Candybars:: %d\n", c_candy_bar);
    printf("::Gumballs:: %d\n\n", c_gumball);
    printf("Player You Get:\n");
    printf("CANDYBARS:: %d\n", num_candy_bar);
    printf("GUMBALLS:: %d\n\n", num_gumball);
    printf("---------------------\n");
    printf("REMAING COUPONS:: %d", receipt);

    return 0;
}