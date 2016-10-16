#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

void print_cipher(int p, int kchar, int pcase); 

int main (int argc, string argv[])
{
    if(argc != 2) //check arg count
    {
        printf("incorrect number of arguments!");
        return 1;
    }
   
    string k = argv[1];
    int o = strlen(k);
   
    for (int i=0; i < o; i++) //check chars in k 
     {
       if(k[i] <'A'|| (k[i] > 'Z' && k[i] < 'a') || k[i] > 'z') //if nonalphabetical char
      {
        printf("incorrect input format!");
        return 1;
       }
       
    }
    
    string s = GetString(); // get plaintext
    
    int j = 0;
    for(int i = 0, n = strlen(s); i < n; i++) {
        
        if(j == o) //wrap keyword
        {
            j = 0;
        }
        
            if(s[i] >= 'A'  && s[i] <= 'Z') //if p uppercase
                {
                    int p = s[i] - 65; //0-25 scale
                    
                    if (k[j] >= 'A'  && k[j] <= 'Z') //if k uppercase
                    {
                    int kchar = k[j] - 65;
                    int pcase = 65;
                    print_cipher(p, kchar, pcase);
                    } else //if k lowercase
                    {
                    int kchar = k[j] - 97;
                    int pcase = 65;
                    print_cipher(p, kchar, pcase);
                    }
                }
                else if(s[i] >= 'a'  && s[i] <= 'z') //if p lowercase
                {
                    int p = s[i] - 97; //0-25 scale
                    
                    if (k[j] >= 'A'  && k[j] <= 'Z') //if k uppercase
                    {
                    int kchar = k[j] - 65;
                    int pcase = 97;
                    print_cipher(p, kchar, pcase);
                    } else //if k lowercase
                    {
                    int kchar = k[j] - 97;
                    int pcase = 97;
                    print_cipher(p, kchar, pcase);
                    }
                }
                else
                {
                printf("%c", s[i]);
                }
                
         if (isalpha(s[i])) //increment j
        {
          j++;
        }
    }
    
    printf("\n");
    return 0;
}

void print_cipher (int p, int kchar, int pcase) //encrypt and print
{
    int shift = (p + kchar)%26 ;
    printf("%c", shift + pcase);
}