#include <stdio.h>

void insertion_sort(int* A, int length) {
    for (int j = 1; j < length; ++j) {
        int key = A[j];
        // Insert A[j] into the sorted A[..j-1]
        int i = j - 1;
        while (i > -1 && A[i] > key) {
            A[i + 1] = A[i];
            --i;
        }
        A[i + 1] = key;
    }
}

int main() {
    int arr[] = {2, 4, 8, 5, 1};
    int length = 5;

    printf("Inputs: ");
    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertion_sort(arr, length);

    printf("Result: ");
    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
