#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
  while (n < 1 || n > 8);

for (int i = 0; i < n; i++)
  {
    // printf ("      ");
    // int j = n - i + 1;
    // while (j>)
    for (int j = n - 1 - i; j > 0; j--)
    {
      printf (" ");
    }
    // for ()
      for (int k = 0; k < i+1 ; k++)
      {
        printf ("#");
        // printf ("  ");

        //  for (int l = 0; l > 8; l = i + 1)
        //  {
        //   printf ("#");
        //   printf("\n");
        //  }
      }
      printf("  ");
      for (int k = 0; k < i+1 ; k++)
      {
        printf ("#");
      }
      printf("\n");
    }

    // print n-i+1 spaces
    // print i+1 hashes
    // print 2 spaces
    // print i+1 hashes




}