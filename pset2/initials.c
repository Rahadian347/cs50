/**
 * initials.c
 *
 * Rahadian Permana
 * mrahadian.permana@gmail.com
 *
 * get initials from inputed name
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int agrc, string argv[])
{
    // prompt user a name
    string s = GetString();
    
    // avoid NULL input 
    if (s != NULL)
    {
        // print first character to upper case
        printf("%c", toupper(s[0]));
        
        // loop to print and convert the rest to upper case
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            // check 'space' char and end of string
            if (s[i] == ' ' && s[i+1] != '\0')
            {
                // print the rest word initials and so on
                printf("%c", toupper(s[i+1]));
            }
        }
        // print a new line
        printf("\n");
    }
}