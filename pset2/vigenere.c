/**
 * vigenere.c
 *
 * Rahadian Permana
 * mrahadian.permana@gmail.com
 *
 * scrambling a letter using cryptography
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string key;
    string msg;
    int keyword;
    
    //check argc input must be no less or more than 2 and, argv[1] must be non-negative integer
    //create key for chiper text
     if (argc != 2 || !isalpha(argv[1]) )
    {
        printf("single command line argument must be an alphabetical character\n");
        return 1;
    }
    else
    {
        key = argv[1];
    }
    
    do 
    {
        msg = GetString();
    } 
    while (msg == '\0');
    
    for (int i = 0, j= 0, length = strlen(msg); i < length; i++, j++)
    {
        if (j >= strlen(msg))
        {
            j = 0;
        }
        
        keyword = key[j];
        
        if ((keyword >= 'a') && (keyword <= 'z'))
        {
            keyword = (keyword - 'a');
        }
        
        if ((keyword >= 'A') && (keyword <= 'Z'))
        {
            keyword = (keyword - 'A');
        }
        
        if (isalpha(msg[i]))
        {
            if (islower(msg[i]))
            {
                msg[i] = ((msg[i] - 'a' + keyword) % 26) + 97;
                printf ("%c", msg[i]);
            }
            
            if (isupper(msg[i]))
            {
                msg[i] = ((msg[i] - 'A' + keyword) % 26) + 65;
                printf ("%c", msg[i]);
            }
        }
        
        else
        {
            printf ("%c", msg[i]);
        }
    }
    
    printf ("\n");
    
    return 0;
}