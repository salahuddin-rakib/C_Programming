#include<stdio.h>
int main(){
  int number, array[10][10];

  for(int i=1; i<=10; i++){
    for(int j=1; j<=10; j++){
      array[i-1][j-1] = i * j;
    }
  }

  // for(int i=1; i<=10; i++){
  //   for(int j=1; j<=10; j++){
  //     printf("table[%d][%d] is :%d\t", i, j, array[i-1][j-1]);
  //   }
  //   printf("\n");
  // }

    
  printf("Enter a value :");
  scanf("%d",& number);
  
  for(int i =1; i<=10; i++){
    printf("%d X %d = %d\n", number, i, array[number-1][i-1]);
  }

  return 0;
}