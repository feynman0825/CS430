//
// Created by 庞海臣 on 2021/5/28.
//

#include <cstdio>

void selection_sort(int *array, int length) {
    for (int i = 0; i < length - 1; i++) {
        auto minIndex = i;
        for (int j = i + 1; j < length; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            auto tmp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = tmp;
        }
    }
}

int main() {
    int array[] = {2, 4, 8, 5, 1};
    int length = 5;

    printf("Inputs: ");
    for (int i = 0; i < length; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    selection_sort(array, length);

    printf("Result: ");
    for (int i = 0; i < length; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}