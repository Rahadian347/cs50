/**
 * greedy.c
 *
 * Rahadian Permana
 * mrahadian.permana@gmail.com
 *
 * counting amount of how much coin is owed.
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // declaring coin variables
    float owed;
    
    do
    {
        printf("How much change is owed?\n");
        owed = GetFloat();
    }
    while (owed <= 0);
    // changing dollar to cent
    int owed1 = round(owed * 100 );
    // count ammount of coin owed
    int remainder1 = owed1 % 25;
    int count = (owed1 - remainder1) / 25;
    int remainder2 = remainder1 % 10;
    int count2 = (remainder1 - remainder2) / 10;
    int remainder3 = remainder2 % 5;
    int count3 = (remainder2 - remainder3) / 5;
    int remainder4 = remainder3 % 1;
    int count4 = (remainder3 -remainder4) /1;
    // print ammount of coin owed
    printf("%i\n", count+count2+count3+count4);
    
    
}