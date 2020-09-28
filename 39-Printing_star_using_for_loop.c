#include<stdio.h>
int main(){
  int i=1,j;
  for(i;i<=5;++i){
    for(j=1;j<=i;++j){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
