#include<stdio.h>
int main(){
  int i=2, j=1;
  printf("Even Numbers are :\n");
  while(i<=100){
    printf("%d even number :%d\n", j, i);
    j += 1;
    i += 2;
  }
  return 0;
}