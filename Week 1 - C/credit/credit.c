#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int number = 0;
    char input[17];
    printf("Enter Your CreditCardNo: \n");
    scanf("%16s", input);
    int len = strlen(input);
    for (int i = len - 2; i >= 0; i -= 2)
    {
        int digit = (input[i] - '0') * 2;
        if (digit >= 10)
        {
            // If doubling results in two digits, add them separately
            digit = digit / 10 + digit % 10;
        }
        number = number + digit;
    }

    int number2 = 0;
    for (int j = len - 1; j >= 0; j -= 2)
    {
        number2 = number2 + (input[j] - '0');
    }

    int final = number + number2;
    if (final % 10 == 0)
    {
        if (strlen(input) == 15 && (input[1] == '4' || input[1] == '7') && (input[0] - '0') == 3)
        {
            printf("AMEX\n");
        }
        else if (strlen(input) == 16 && (input[1] >= '1' && input[1] <= '5') && (input[0] - '0') == 5)
        {
            printf("MASTERCARD\n");
        }
        else if ((strlen(input) == 13 || strlen(input) == 16) && ((input[0] - '0') == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}