#include <stdio.h>
int main()
{
  int number;
  printf("Enter a number :");
  scanf("%d", &number);
  if (number % 2 == 0)
  {
    printf("The Number is a even number.");
  }
  else
  {
    printf("The number is an odd number.");
  }

  return 0;
}