/**
 * caesar.c
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
    int key = 0;
    string msg;
    
    //check argc input must be no less or more than 2 and, argv[1] must be non-negative integer
    //create key for chiper text
    if (argc != 2 || atoi(argv[0]) < 0 || atoi(argv[1]) < 0)
    {
        printf("single command line argument must be a non-negative integer\n");
        return 1;
    }
    else
    {
        key = atoi(argv[1]);
    }
    
    // input plain text message from user
    msg = GetString();
    
    // enchiper message with caesar chiper then print
    for (int i = 0, n = strlen(msg); i < n; i++)
    {
        if  (isalpha(msg[i]) && isupper(msg[i]))
        {
            msg[i] = ((msg[i] - 65 + key) % 26) + 65;
        }
        if  (isalpha(msg[i]) && islower(msg[i]))
        {
            msg[i] = ((msg[i] - 97 + key) % 26) + 97;
        }
       printf("%c", msg[i]);
    }
    printf("\n");
    return 0;
    
}