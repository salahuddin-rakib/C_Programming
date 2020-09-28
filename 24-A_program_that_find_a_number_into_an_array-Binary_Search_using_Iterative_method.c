#include<stdio.h>

int binarySearch(int array[], int start, int end, int searchingNumber){
  while(start <= end){
    int mid = (start + end)/2;

    if(array[mid] == searchingNumber){
      return mid;
    }
    else if(array[mid] > searchingNumber){
      end = mid - 1;
    }
    else{
      start = mid + 1;
    }
  }
  return - 1;
}

int main(){
  int searchingNumber, sizeOfArray;
  int array[] = {1, 3, 4, 5, 6, 8, 9, 11, 13, 14, 20, 25, 29, 30, 36, 40};
  sizeOfArray = sizeof(array)/sizeof(array[0]);
  printf("Enter the number which you want to search :");
  scanf("%d", & searchingNumber);

  int indexNumber = binarySearch(array, 0, sizeOfArray - 1, searchingNumber);

  (indexNumber == -1)? printf("Your entered number isn't available in the array.") : printf("Your entered number is in index number %d.",indexNumber);
  return 0;
}