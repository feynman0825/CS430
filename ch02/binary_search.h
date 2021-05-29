//
// Created by 庞海臣 on 2021/5/29.
//

#ifndef CS430_BINARY_SEARCH_H
#define CS430_BINARY_SEARCH_H

inline int binary_search(int* A, int start, int end, int target) {
    if (end - start < 1) {
        return -1;
    }

    auto mid = (start + end) / 2;
    if (A[mid] == target) {
        return mid;
    }
    if (A[mid] > target) {
        return binary_search(A, start, mid, target);
    }

    return binary_search(A, mid + 1, end, target);
}
#endif // CS430_BINARY_SEARCH_H
