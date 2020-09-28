#include<stdio.h>

int linearSearch(int array[], int sizeOfArray, int searchingNumber){
  for(int i = 0; i< sizeOfArray; i++){
    if(array[i] == searchingNumber){
      return i;
    }
  }
  return -1;
}

int main(){
  int searchingNumber,sizeOfArray;
  int array[] = {1, 3, 5, 6, 7, 9, 10, 30, 33, 37, 40};
  printf("Enter the number which you want to search in the array :");
  scanf("%d", &searchingNumber);
  sizeOfArray = sizeof(array)/sizeof(array[0]);
  int indexNumber = linearSearch(array, sizeOfArray, searchingNumber);

  (indexNumber == -1)? printf("The number you have entered is not available in the array.") : printf("The number you have entered is in index number %d.", indexNumber);

  return 0;
}