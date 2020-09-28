#include <stdio.h>
int main()
{
  int ratings;
  printf("Enter your ratings (1-5) :");
  scanf("%d", &ratings);
  switch (ratings)
  {
  case 1:
    printf("Your Given ratings is 1.");
    break;
  case 2:
    printf("Your Given ratings is 3.");
    break;
  case 3:
    printf("Your Given ratings is 3.");
    break;
  case 4:
    printf("Your Given ratings is 4.");
    break;
  case 5:
    printf("Your Given ratings is 5.");
    break;
  default:
    printf("You have given an unexpected ratings.");
    break;
  }
  return 0;
}