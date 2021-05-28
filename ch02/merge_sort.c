#include <limits.h>
#include <memory.h>
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

void another_merge(int* A, int p, int q, int r) {

    // copy the left part to a new alloc memory
    int leftHalfElementCount = q - p;
    int* leftStart = malloc(sizeof(int) * leftHalfElementCount);
    memcpy(leftStart, A + p, sizeof(int) * leftHalfElementCount);

    // right part use the original array memory
    int rightHalfElementCount = r - q;
    int* rightStart = A + q;

    int leftHalfElementTraveled = 0;
    int rightHalfElementTraveled = 0;

    // the merge target is the begin of the original left part, we have made a
    // copy of the left part, so we don't worry about overriding.
    int* target = A + p;

    // if the two part all have element untraveled, we compare them
    while (leftHalfElementTraveled < leftHalfElementCount &&
           rightHalfElementTraveled < rightHalfElementCount) {

        if (leftStart[leftHalfElementTraveled] <= rightStart[rightHalfElementTraveled]) {
            *(target++) = leftStart[leftHalfElementTraveled++];
        } else {
            *(target++) = rightStart[rightHalfElementTraveled++];
        }
    }

    // if the right part exhaust it's elements, we copy all left elements of
    // the left part to the target, if the left part exhaust it's elements, we
    // do nothing, because it's already sorted in the target
    if (rightHalfElementTraveled == rightHalfElementCount) {
        memcpy(target,
               leftStart + leftHalfElementTraveled,
               sizeof(int) * (leftHalfElementCount - leftHalfElementTraveled));
    }

    // free the left copy
    free(leftStart);
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
