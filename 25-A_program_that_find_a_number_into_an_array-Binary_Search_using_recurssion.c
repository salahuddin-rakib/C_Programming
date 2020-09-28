/*
Binary Search is more efficient than Linear search.Time complexity of Linear search is O(n) and TIme complexity of Binary Search is O(log(n)).
*/
#include<stdio.h>

int binarySearch(int array[], int start, int end, int searchingNumber){
  if(end >= 1){
    int mid = (start + end)/2;
    if(array[mid] == searchingNumber){
      return mid;
    }
    else if(array[mid] > searchingNumber){
      return binarySearch(array, start, mid -1, searchingNumber);
    } 
    else{
      return binarySearch(array, mid + 1 , end, searchingNumber);
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
  int indexNumber = binarySearch(array, 0, sizeOfArray - 1, searchingNumber);

  (indexNumber == -1)? printf("The number you have entered is not available in the array.") : printf("The number you have entered is in index number %d.", indexNumber);

  return 0;
}