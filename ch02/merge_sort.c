#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void merge(int* A, int p, int q, int r) {
    int n1 = q - p;
    int n2 = r - q;
    int *L, *R;

    L = (int*)malloc((n1 + 1) * sizeof(int));
    R = (int*)malloc((n2 + 1) * sizeof(int));

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    for (int i = 0; i < n1; ++i) {
        L[i] = A[p + i];
    }

    for (int i = 0; i < n2; ++i) {
        R[i] = A[q + i];
    }

    int i = 0, j = 0;

    for (int k = p; k < r; ++k) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            ++i;
        } else {
            A[k] = R[j];
            ++j;
        }
    }

    free(L);
    free(R);
}

void merge_sort(int* A, int p, int r) {
    if (r - p > 1) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q, r);
        merge(A, p, q, r);
    }
}

int main() {
    int arr[] = {2, 4, 8, 5, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Inputs: ");
    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, 0, length);

    printf("Result: ");
    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
