/*
This isn't the best way to find prime number. The complexity of this program is huge (n). So we need a better approach.
*/
#include<stdio.h>
#include<stdbool.h>
int main(){
  int number;
  bool flag = true;
  printf("Enter a number :");
  scanf("%d",&number);
  if(number ==1){
      flag =false;
  }
  else{
    for(int i=2;i<number;i++){
        if(number%i == 0){
          flag =false;
          break;
        }
      }
  }
  if(flag ==false){
    printf("The entered number isn't a prime number.");
  }
  else{
    printf("The entered number is a prime number.");
  }
  return 0;
}