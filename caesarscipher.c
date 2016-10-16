/**
* 
* Caesar's Cipher by Sarah Kalen
*
* A simple encryption program in C that works by shifting 
* user-inputted text a user-inputted number of positions 
* in the alphabet.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    while (argc != 2) //check for one argc==2
    {
        printf("Please input a single argument");
        return 1;
    }
    
   string s = GetString();
    int k = atoi(argv[1]);
    
    
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if(s[i] == ' ')
        {
            printf(" "); //if space
        }
        else if(s[i] >= 'a'  && s[i] <= 'z') //if lowercase
        {
            int c = s[i] - 97; //0-25 scale
            int shift = (c + k)%26; 
            printf("%c", shift + 97 );
        }
        else if(s[i] >= 'A'  && s[i] <= 'Z') //if uppercase
        {
            int c = s[i] - 65; //0-25 scale
            int shift = (c + k)%26;  
            printf("%c", shift + 65);
        }
        else
        {
        printf("%c", s[i]);
        }
    }
     printf("\n");
    }
    
    
