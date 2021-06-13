#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define PARENT(i) (int((i+1)/2)-1)
#define LEFT(i) (2*(i+1)-1)
#define RIGHT(i) (2*(i+1))

struct HEAP{
  int* array;
  int size;
};

void max_heapify(struct HEAP A, int i){
  int l = LEFT(i);
  int r = RIGHT(i);
  int largest = i;
  if ((l < A.size) && (A.array[l] > A.array[i])){
    largest = l;
  }

  if ((r < A.size) && (A.array[r] > A.array[largest])){
    largest = r;
  }

  if (largest != i){
    int temp = A.array[i];
    A.array[i] = A.array[largest];
    A.array[largest] = temp;
    max_heapify(A, largest);
  }
}

void build_max_heap(struct HEAP A){
  for (int i=(int)(A.size/2)-1;i>=0;i--){
    max_heapify(A, i);
  }
}

void heap_sort(struct HEAP A){
  build_max_heap(A);
  for (int i = A.size-1;i>=1;i--){
    int temp = A.array[0];
    A.array[0] = A.array[i];
    A.array[i] = temp;
    A.size -= 1;
    max_heapify(A, 0);
  }
}

int main(){
  int size = 10;
  struct HEAP A;
  A.array = (int*)malloc(size * sizeof(int));
  A.array[0] = 16;
  A.array[1] = 4;
  A.array[2] = 10;
  A.array[3] = 14;
  A.array[4] = 7;
  A.array[5] = 9;
  A.array[6] = 3;
  A.array[7] = 2;
  A.array[8] = 8;
  A.array[9] = 1;
  A.size = size;

  printf("Before sort:");
  for (int i=0;i<size;i++){
    printf("%d ", A.array[i]);
  }
  printf("\n");

  //max_heapify(A, 1);
  //build_max_heap(A);
  heap_sort(A);

  printf("After sort:");
  for (int i=0;i<size;i++){
    printf("%d ", A.array[i]);
  }
  printf("\n");

  free(A.array);
	return 0;
}
