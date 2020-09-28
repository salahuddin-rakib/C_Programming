#include <stdio.h>

int pow(int a, int b)
{
  const int c = a;
  for (int i = 1; i < b; i++)
  {
    a = a * c;
  }
  return a;
}

int main()
{
  int a, b;
  printf("Enter first value :");
  scanf("%d", &a);
  printf("Enter second value :");
  scanf("%d", &b);
  printf("The value of %d to the power %d is : %d", a, b, pow(a, b));
  return 0;
}