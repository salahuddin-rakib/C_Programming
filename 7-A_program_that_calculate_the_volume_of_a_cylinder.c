#include <stdio.h>
int main()
{
  float height, radius, pi = 3.1416;
  printf("Enter the value of Radius :");
  scanf("%f", &radius);
  printf("Enter the value of height :");
  scanf("%f", &height);
  printf("The area of cylinder is : %f", radius * radius * pi * height);
  return 0;
}