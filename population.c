#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // TODO: Prompt for start size

        int n;
        do
    {
        n = get_int("Enter Start Size: ");
    }
     while (n < 9);

    // TODO: Prompt for end size

        int j;
        do
        {
            j = get_int("Enter End Size: ");
        }
        while (j < n);

    // TODO: Calculate number of years until we reach threshold
    int count = 0;
    while (n<j)
    {
        n = n + (n/3) - (n/4);
        count++;
    }

    // TODO: Print number of years

    printf("Years: %i", count);
}
