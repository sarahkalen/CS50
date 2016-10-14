#include <stdio.h>
#include <cs50.h>
#include <math.h>

float changeF;

int main(void)
{

do
{
printf("How much change is owed?:");                //prompt user
changeF = GetFloat();
} while (changeF < 0);                              //reprompt loop

int changeI = (round(changeF * 100));                      //convert float to int

int quarters = (changeI / 25);
int changeQ = (changeI - (25 * quarters));

int dimes = (changeQ / 10);
int changeD = (changeQ -(10 * dimes));

int nickles = (changeD / 5);
int changeN = (changeD - (5 * nickles));

int pennies = (changeN / 1); 
int changeP = (changeN - (1 * pennies));
    
    if(changeQ == 0){                               //print conditions
    int cointotalQ = (quarters);
    printf("%i\n", cointotalQ);
    
        }else if(changeD == 0){
        int cointotalD = (quarters + dimes);
        printf("%i\n", cointotalD);
        
            }else if(changeN == 0){
            int cointotalN = (quarters + dimes + nickles);
            printf("%i\n", cointotalN);
            
                }else if(changeP == 0){
                int cointotalP = (quarters + dimes + nickles + pennies);
                printf("%i\n", cointotalP);
                }

}