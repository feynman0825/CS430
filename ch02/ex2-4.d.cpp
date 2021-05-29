//
// Created by 庞海臣 on 2021/5/29.
//

#include <memory>

/***
 *
 * @param A
 * @param p
 * @param q
 * @param r
 * @return the inversion pair found between the two sorted part
 */
int merge(int* A, int p, int q, int r) {

    int inversionPairs = 0;

    // copy the left part to a new alloc memory
    int leftHalfElementCount = q - p;
    int* leftStart = (int*)malloc(sizeof(int) * leftHalfElementCount);
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

        if (leftStart[leftHalfElementTraveled] <=
            rightStart[rightHalfElementTraveled]) {
            *(target++) = leftStart[leftHalfElementTraveled++];
        } else {
            *(target++) = rightStart[rightHalfElementTraveled++];
            inversionPairs += (leftHalfElementCount - leftHalfElementTraveled);
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

    return inversionPairs;
}

/***
 *
 * @param A
 * @param p
 * @param r
 * @return the inversion pair count of found in the sort algorithm
 */
int merge_sort(int* A, int p, int r) {
    if (r - p > 1) {
        int q = (p + r) / 2;
        int n1 = merge_sort(A, p, q);
        int n2 = merge_sort(A, q, r);
        int n3 = merge(A, p, q, r);
        return n1 + n2 + n3;
    } else {
        return 0;
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

    int inversionPairs = merge_sort(arr, 0, 5);

    printf("Result: ");
    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Inversion: %d\n", inversionPairs);
    return 0;
}