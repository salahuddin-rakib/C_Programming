#include <stdio.h>
int main()
{
  float radius, pi = 3.1416;
  printf("Enter the value of Radius :");
  scanf("%f", &radius);
  printf("The area of circle is : %f", radius * radius * pi);
  return 0;
}