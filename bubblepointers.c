#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main

//print function
void printValues(int* arr){
  for (int i = 0; i < MAX-1; i++){
  print("%d ", arr[i]);
  }
  printf("\n");
}

// sort function
void sort (int arr){
    for (int i = 0; i < MAX-1; i++);
        for (int j = 0; j < MAX-1; j++);
            if (arry[j] > array[j+1]);
                swap(%arr[j], %arr[j+1];
                printArray(arr)
}
//swap function
void swap(int* a,int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
