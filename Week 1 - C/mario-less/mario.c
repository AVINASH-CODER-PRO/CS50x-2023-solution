#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter the hight of the pyramid: ");
    }
    while (height < 1 || height > 8);               // use of do and while loop ,To make sure that user follows our rules and dont enter any number

    for (int i = 0; i < height; i++)
    {
        for (int k = height - i - 2; k >= 0 ; k--)     /*This loop is for crating a blank space to get the desired result
                                                         without this the pattern will start from the left side and goes towards the right */
        {
            printf(" ");
        }


        for (int j = 0; j <= i ; j++)
        {

            printf("#");


        }
        printf("\n");

    }

}