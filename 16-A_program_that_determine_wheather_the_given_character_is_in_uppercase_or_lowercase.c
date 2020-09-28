/*
We can solve this problem by using ascii value of a character.
From ascii table we know that Lowercase alphabet(a-z) ascii value is  97-122. And Uppercase alphabet(A-Z) ascii value is 65-90.
*/
#include <stdio.h>
int main(){
  char alphabet;
  printf("Enter an alphabet :");
  scanf("%c", &alphabet);
  if ((alphabet >= 97) && (alphabet <= 122)){
    printf("Your entered alphabet is in lowercase.\n");
  }
  else if ((alphabet >= 65) && (alphabet <= 90)){
    printf("Your entered alphabet is in uppercase.\n");
  }
  else{
    printf("Your entered character isn't an alphabet.\n");
  }
  return 0;
}