/*
The previous approach was not good enough, because the time complexity is O(n). So we came up in a plan. That is :
*/
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
  int number;
  bool flag =true;
  printf("Enter a number :");
  scanf("%d",&number);
  if(number ==1){
      flag =false;
  }
  else{
    /*for(int i=2;i < sqrt(number);i++){  ///We have used sqrt(number) insted of number. For this reason the time complexity is decreased from O(n) to O(sqrt(n)).But it is also  a difficult task to find sqrt of every number. So we can rewrite this code like : [i * i < number]. It works the same way like sqrt but it is much more efficient.*/
    for(int i =2; i * i < number; i++){
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