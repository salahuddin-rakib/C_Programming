#include <stdio.h>
int main()
{
  int number;
  printf("Enter a number :");
  scanf("%d", &number);
  if (number % 97 == 0)
  {
    printf("The Number is divisibe by 97.");
  }
  else
  {
    printf("The number isn't divisible by 97.");
  }
  return 0;
}