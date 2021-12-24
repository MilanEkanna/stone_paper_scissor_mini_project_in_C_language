/*----------------------------------------   RANDOM NUMBER GENERATOR   ------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0)); /*time () returns a time value 
                     which vary everytime and hence the pseudo-random number
                     vary for every program call. 
                     NOTE: This program will create different sequence of random numbers on every program run.*/
    number = rand() % 1000 + 1;
    printf("the number is %d", number);
    return 0;
}
/*-----------------------------------------------------   END   --------------------------------------------------------*/