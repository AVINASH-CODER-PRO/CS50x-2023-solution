#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter the height of pyramid: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int k = height - i - 2; k >= 0; k--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int a = 0; a <= i; a++)
        {
            printf("#");
        }
        printf("\n");
    }
}
