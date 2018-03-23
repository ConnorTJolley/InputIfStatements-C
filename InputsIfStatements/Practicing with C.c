#include <string.h>
#include <stdio.h>

//Needs include stdio.h to use printf functions as it's defined in stdio.h
//#include <stdbool.h>
//Needed to use booleans but only available with right file / directory

int x = 0;
char term;

//Below 2 lines was to try and test booleans
//typedef enum { false, true } bool;
//bool Loop = "True";

int main(void)
{
    int x = 0;
    char testInput[1];
    char term;
    char chr;

    while(x==0)
    {
        int testInteger;
        printf("Enter an integer that is greater than 20 but less than 30: ");
        scanf("%d",&testInteger);


        //Below was to check if input is an integer or not, but after this check, the else didn't execute if it was an integer or not

        //if(scanf("%d%c", &testInteger, &term) != 2 || term != '\n')
        //{
        //    printf("You didn't enter a valid number! Closing Program! \n");
        //    x++;
        //}

        if(testInteger > 20)
        {
            if(testInteger < 30)
            {
                printf("That is correct! \n");
            }
            else
            {
                printf("That number is greater than 30! \n");
            }
        }
        else
        {
            printf("That number is less than 20! \n");

            printf("The number you entered was %d ",testInteger," \n");
            printf(" \n");
        }

        printf("Would you like to continue? Y / N: ");
        scanf(" %c",&chr);

        printf("You entered: %c.", chr);
        printf(" \n");


        //Needs to use double '=' to make sure it's a comparison not an assignment, || is 'or' statement, && would be 'and' statement
        if ((chr == 'y') || (chr == 'Y'))
        {
            //if the input is either 'y' OR 'Y' then run code below;
            printf("You have selected Yes! Restarting Program! \n");
        }
        else if ((chr == 'n') || (chr == 'N'))
        {
            //if the input is either 'n' OR 'N' then run code below;
            printf("You have selected No! Closing Program! \n");
            return 0;
        }
        else
        {
            printf("You have entered an invalid option! Restarting Program by Default! \n");
        }
    }
}




