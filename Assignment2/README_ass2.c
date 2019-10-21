/*
Mason D. Galyon
Assignment 2 ---

Number Guessing Game


Design: 
The program should behave as follows: 

Player 1 enters a secret number(1-10)...

Player 2 gets 3 chances to guess Player 1's number

if guess is == to player1_num
print You Win!!
print Would you like to play again? (y/n):
get player 2 input
    if p2_input == n:
    c.exit(0)
    else p2_input == 'y':
    restart program from the top 


if guess is > player1_num
print player 2 %d, num_guess
print Your Guess is too High

print guess again

get input from player 2: 


if guess is < player1_num

print Player 2 %d, num_guesses

print Your Guess is too Low
print Guess Again


if num_guesses = 0
print You have run out guesses
print Would you like to play again?? (y/n): 
get Player 2 input:
    if p2_input == 'n'
    c.exit(0)
    else
    run program from the top



TEST: 

Player 1 INPUT an int betwenn 1 and 10: 9

Player 2 you have 3 guesses.
INPUT:: Guess: 4

OUTPUT: TOO LOW, Guess Again:
Input:: 6

OUTPUT: TOO LOW, Guess Again:
Input:: 9

OUTPUT: YOU WIN!
OUTPUT: Would you like to play again (y/n):

Input: n
OUTPUT: Thanks For Playing!!
OUTPUT: GOODBYE!!


REFLECTION:

This week in class we discussed common inputs like fgets and scanf. We also talked a bit about
output, simple arrays and we re-covered common data types in C.
Whilst working on this project I learned how to apply simple math into my code aswell as some useful
information about generating psuedo random numbers. I wish i knew a bit more about laying out my code in C
before beginning this project, i feel like that would have helped with finishing my code portion quicker.
Some resources I used to help myself approach this project were www.programiz.com, they are helpful because they
provide basic and detailed explanations and examples which appeal to beginners. I also referenced tutorialspoint.com
and used some helpful information from a books I personally own called Programming in C by Al Sweigart.

Discussion Ideas:

Integer Overflow can happen when you try to add two very large positive or very large negative numbers together.
This can lead to software failures also known as bugs. Which can ultimately lead to exploitable vulnerabilities.
Occurs when the result of an arithmetic operation is a value which is too large to fit in the available storage space.





*/