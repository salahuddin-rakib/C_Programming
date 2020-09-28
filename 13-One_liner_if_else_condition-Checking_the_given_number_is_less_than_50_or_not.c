#include <stdio.h>
int main()
{
  int number;
  printf("Enter a number :");
  scanf("%d", &number);
  (number < 50) ? printf("%d is less than 50.", number) : printf("%d is not less than 50.", number);
  return 0;
}