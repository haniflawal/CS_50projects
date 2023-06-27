#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  long n = get_long("Number: ");

  long y = 0;
  long j = n;
  bool check = true;
  while (check)
  {
    if (j/100>=1)
    {
      j = j/10;
      y++;
    }
    else
    {
      if (n/10 == 0)
      {
        y = 1;
      }
      else
      {
        y+=2;
      }
      check = false;
    }
  }
  long b = 0;
  long m = 0;

  if (y%2 == 0) //odd
  {
 long d = n;
 bool t = true;
 long x = 0;
 while (t)
  {
    if (x == 0)
    {
      d /=10;
      long za = (d%10)*2;

      if (za/10 < 1)
      {
        m = za;
      } else
      {
        m = (za/10) + (za%10);
      }
      x++;
    }
    else
    {
      d /=100;
      long za = (d%10)*2;
      if(za/10 < 1)
      {
        m = za + m;
      } else
      {
        long v = za%10;
        m = (za/10) + v + m;
      }
      if (d/10 < 1)
      {
        t = false;
      }
    }
  }

  long e = n;
  while (e/100 >= 1)
    {
      b = e%10 + b;
      e /=100;
    }
    b = e%10 + b;
  }

  else if (y%2 == 1) //even

  {
 long d = n;
 bool t = true;
 long x = 0;
 while (t)
  {
    if (x == 0)
    {
      d /=10;
      long za = (d%10)*2;

      if (za/10 < 1)
      {
        m = za;
      } else
      {
        m = (za/10) + (za%10);
      }
      x++;
    }
    else
    {
      d /=100;
      long za = (d%10)*2;
      if(za/10 < 1)
      {
        m = za + m;
      } else
      {
        long v = za%10;
        m = (za/10) + v + m;
      }
      if (d/100 < 1)
      {
        t = false;
      }
    }
  }

  long e = n;
  while (e/10 >= 1)
    {
      b = e%10 + b;
      e /=100;
    }
    b = e%10 + b;
  }
    long l = 0;
    long formula = 0;
    l = m + b;
    formula = l%10;

    if ((formula == 0) && (y == 15) && ((j == 34) || (j == 37)))

    {
      printf("AMEX\n");
    }

    else if ((formula == 0) && (y == 16) && ((j == 51) || (j == 52) || (j == 53) || (j == 54) || (j == 55)))

    {
      printf("MASTERCARD\n");
    }

    else if ((formula == 0) && ((y == 13) || (y == 16)))
    {
         j /=10;
         if (j == 4)
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

}
