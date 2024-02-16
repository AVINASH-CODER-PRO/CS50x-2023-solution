#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size_of_llamas;
    do
    {
        start_size_of_llamas = get_int("Enter the start size of llamas: ");

    }
    while (start_size_of_llamas < 9);


    // TODO: Prompt for end size
    int end_size_of_llamas;
    do
    {
        end_size_of_llamas = get_int("Enter the end size of llamas: ");
    }
    while (end_size_of_llamas < start_size_of_llamas);

    // TODO: Calculate number of years until we reach threshold
    int n = 0;
    while (start_size_of_llamas < end_size_of_llamas)
    {
        start_size_of_llamas += start_size_of_llamas / 3 - start_size_of_llamas / 4 ;
        n++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", n);
}
