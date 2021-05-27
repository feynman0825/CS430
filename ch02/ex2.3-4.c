// 2.3-4
// We can express insertion sort as a recursive procedure as follows.
// In order to sort A[1: n], we recursively sort A[1:n-1] and then
// insert A[n]􏰺into the sorted array A[1:n-1]. Write a recurrence
// for the running time of this recursive version of insertion sort.

#include <stdio.h>

void insert_element(int *A, int length){
	//Last element
	int key = A[length-1];
	// Insert A[n] into the sorted A[:n-1]
	int i = length - 2;
	while (i > -1 && A[i] > key){
		A[i+1] = A[i];
		--i;
	}
	A[i+1] = key;
}

void insertion_sort(int *A, int length){
	if (length>1){
		insertion_sort(A, length-1);
		insert_element(A, length);
	}
}

int main(){
    int arr[] = {2, 4, 8, 5, 1};
    int length = 5;

    printf("Inputs: ");
    for(int i=0;i < length; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertion_sort(arr, length);

    printf("Result: ");
    for(int i=0;i < length; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


