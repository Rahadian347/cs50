/**
 * mario.c
 *
 * Rahadian Permana
 * mrahadian.permana@gmail.com
 *
 * print a half of pyramid using hash and space
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    // declare an int variable
    int h = 0;
    
    // getting input as pyramid height
    do
    {
        printf("Height: ");
        h = GetInt();
    }
    while ( h > 23 || h < 0 );
    
    // make a pyramid with "#" and " " with for loops
    for (int i = 0; i < h; i++)
    {
        for (int x = i; x < h - 1; x++)
        {
            printf(" ");
        }
        for (int y = 0; y <= i+1; y++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}