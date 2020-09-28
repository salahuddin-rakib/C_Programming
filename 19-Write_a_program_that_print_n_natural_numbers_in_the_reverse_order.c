#include<stdio.h>
int main(){
  int number;
  printf("Enter the number :");
  scanf("%d",& number);
  for(int i=number; i ;i--){  //Here we can write also for(int i =number;i>0;i--)
    printf("%d\t", i);
  }
  return 0;
}