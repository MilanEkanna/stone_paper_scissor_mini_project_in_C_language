/*------------------------------------------   MINI PROJECT - ROCK PAPER SCISSOR GAME   -------------------------------------------*/

#include <stdio.h>
#include <stdlib.h> //As we used -> <time.h>...
#include <time.h>   //As we used -> srand(time(0))...

int rockPaperScissor(char you, char comp) //-> declaration of function and give parameters ->characters one for you and one for computer...
{
    // Condition for draw
    if (you == comp) //-> We return the value 0 if it is a draw, return 1 if I win and -1 if i loose...
    {
        return 0; //-> Satisfy the three conditions for draw...
    }
    //Non draw conditions...
    if (you == 'p' && comp == 'r')
    {
        return 1; //-> If YOU choose paper and COMPUTER choose rock and vice versa...
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }

    if (you == 's' && comp == 'p')
    {
        return 1; //-> If YOU choose scissor and COMPUTER choose paper and vice versa...
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }

    if (you == 's' && comp == 'r')
    {
        return -1; //-> If YOU choose scissor and COMPUTER choose rock and vice versa...
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    srand(time(0)); //-> Since the time is continually changing, the seed is forever changing...

    int number = rand() % 100 + 1; //-> Here we generate a random number between 1 to 100...

    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    printf("LETS START THE GAME.\n");  //-> For maintenance...
    printf("-------------------\n");
    printf("Enter 'r' for ROCK, 'p' for PAPER and 's' for scissor\n");  //-> Some sort of information...
    printf("------------------------------------------------------\n"); //-> For maintenance...
    scanf("%c", &you);  //-> Enter character  to you...
    int result = rockPaperScissor(you, comp);  //-> Calling the function that returns result in an integer value (0,1,-1)...
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf(" Yeah You win!\n");
    }
    else
    {
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp); //-> Displaying the result...
    return 0;
}

/*----------------------------------------------------------------END----------------------------------------------------------------*/