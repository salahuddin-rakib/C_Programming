/*
If we want to determine a year is leap year or not, we need to go through these 5 steps. That are :

step-1: If the year is evenly divisible by 4 then got to step 2. Otherwise go to step 5.

step-2:If the year is evenly divisible by 100 then got to step 3. Otherwise go to step 4.

step-3:If the year is evenly divisible by 400 then got to step 4. Otherwise go to step 5.

step-4:The year is a leap year(It has 366 days).

step-5:The year isn't a leap year(It has 365 days).
*/

#include <stdio.h>
int main()
{
  int year;
  printf("Enter a year :");
  scanf("%d", &year);
  if (year % 4 != 0)
  {
    printf("The year isn't a leap year(It has 365 days).");
  }
  else
  {
    if (year % 100 == 0)
    {
      if (year % 400 == 0)
      {
        printf("The year is a leap year(It has 366 days).");
      }
      else
      {
        printf("The year isn't a leap year(It has 365 days).");
      }
    }
    else
    {
      printf("The year is a leap year(It has 366 days).");
    }
  }

  return 0;
}