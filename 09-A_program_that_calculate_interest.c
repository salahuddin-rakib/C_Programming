#include <stdio.h>
int main()
{
  float principle = 100, rate = 12, years = 2;
  float simpleInterest = (principle * rate * years) / 100;
  printf("The value of simple interest is %f", simpleInterest);
  return 0;
}