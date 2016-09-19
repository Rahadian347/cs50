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

string Chiper();

int main(void)
{
    printf("Enter the message:\n");
    string msgs = GetString();
    Chiper(msgs);
}
























// This is function definition
string Chiper(string msg)
{
    printf("Enter the key:\n");
    int key = GetInt();
    
    printf("Chippering.....\n");
    
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
    return msg;
}