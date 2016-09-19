/**
 * water.c
 *
 * Rahadian Permana
 * mrahadian.permana@gmail.com
 *
 * find out how much bottle of water spend when shower
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declaring variables
    int mnt;
    int btl = 12;
    
    // loop for get a possitive integer
    do
    {
        // getting minute of shower duration
        printf("minutes: ");
        mnt = GetInt();
    }
    while (mnt <= 0);
    
    // do the math to convert shower duration to bottle spent
    printf("bottle: %i\n", mnt*btl);
    
}