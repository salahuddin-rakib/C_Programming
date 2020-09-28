#include<stdio.h>
int main(){
  int evenNumber = 2, i=0;
  const int increment = 2;
  while(i<100){
    printf("%d even number :%d\n", i+1, evenNumber);
    evenNumber += increment;
    i++;
  }
  return 0;
}