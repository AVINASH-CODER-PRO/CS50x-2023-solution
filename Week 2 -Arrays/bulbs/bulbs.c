#include <cs50.h>
#include <stdio.h>
#include <string.h>

int last_digi, new[8], len;
const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string input = get_string("Enter your string: ");
    for (int i = 0; i < strlen(input); i++)
    {
        unsigned char byte = input[i];
        int bytes = byte;
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            last_digi = bytes % 2;
            bytes = bytes / 2;
            new[j] = last_digi;
        }
        for (int k = 8 - 1; k >= 0; k--)
        {
            print_bulb(new[k]);
        }
        printf("\n");
    }
    return 0;
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
