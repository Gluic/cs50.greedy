#include <stdio.h>
#include <cs50.h>
/*
* The Greedy algoritm
* output a number of coins to give change
* change input by user in $ and cents
**/
int main(void)
{
    // count  number of coins
    int x = 0; 
    // get a sum to give change
    printf ("Input a sum for change: ");
    float sum = GetFloat();
    
    // check if value of change is negative
    while (sum < 0)         
    {
        printf ("Input a positive sum for change: ");
        sum = GetFloat();
    }
    // transform sum to cents
    int cents = sum * 1000 / 10;
    // count coins to give change
    while (cents >= 25)
    {
        cents = cents - 25;
        x = x + 1;
    }
    
    while (cents >= 10)
    {
        cents = cents - 10;
        x = x + 1;
    }
   
    while (cents >= 5)
    {
        cents = cents - 5;
        x = x + 1;
    }
    
    while (cents >= 1)
    {
        cents = cents - 1;
        x = x + 1;
    }
    // prints a number of coins to give change
    printf ("%d\n",x);
    
    
}
    
