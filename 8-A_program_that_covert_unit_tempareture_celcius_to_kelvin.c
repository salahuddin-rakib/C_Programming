#include <stdio.h>
int main()
{
  float celcius_tempareture, farenheit_tempareture;
  printf("Enter the Tempareture in celcius :");
  scanf("%f", &celcius_tempareture);
  farenheit_tempareture = (celcius_tempareture * 9 / 5) + 32;
  printf("The value of that celcius tempareture in Farenheit is :%f", farenheit_tempareture);
  return 0;
}