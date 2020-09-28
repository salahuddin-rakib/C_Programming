#include <stdio.h>
int main()
{
  float ground, height;
  printf("Enter the triangle's ground :");
  scanf("%f", &ground);
  printf("Enter the triangle's height :");
  scanf("%f", &height);
  printf("The area of triangle is : %f", (0.5 * ground * height));
  return 0;
}