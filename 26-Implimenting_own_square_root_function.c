#include<stdio.h>

int ownSqrt(int l, int input){
  int mid, r = input;
  while(l <= r){
    mid = (l + r)/2;
    if(mid * mid == input){
      return mid;
    }
    else if(mid * mid  > input){
      r = mid - 1;
    }
    else{
      l = mid + 1;
    }
    
  }
  return - 1;
}

int main(){
  int input;
  printf("Give an input :");
  scanf("%d",& input);
  int squareRoot = ownSqrt(0, input);
  (squareRoot == -1)? printf("The number has no perfect square root.") : printf("The square root of %d is :%d", input, squareRoot);

  return 0;
}