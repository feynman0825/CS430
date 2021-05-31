#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct cachedtuple {
    int left;
    int right;
    int sum;
};

typedef struct cachedtuple Tuple;

Tuple find_max_crossing_subarray(int *A, int low, int mid, int high){
    Tuple tuple;

    int left_sum = INT_MIN, right_sum = INT_MIN;
    int sum = 0;
    int max_left = -1;
    int max_right = -1;

    for (int i=mid;i>= low;--i){
    	sum += A[i];
	if (sum > left_sum){
	    left_sum = sum;
	    max_left = i;
	}
    }
    sum = 0;

    for (int i=mid+1;i<=high;++i){
        sum += A[i];
	if (sum > right_sum){
	    right_sum = sum;
	    max_right = i;
	}
    }
    tuple.left = max_left;
    tuple.right = max_right;
    tuple.sum = left_sum + right_sum;

    return tuple;
}


Tuple find_maximum_subarray(int *A, int low, int high){
    Tuple tuple;
    if (high == low){
    	tuple.left = low;
	tuple.right = high;
	tuple.sum = A[low];
	return tuple;
    }
    else {
    	int mid = (low + high)/2;
	Tuple left = find_maximum_subarray(A, low, mid);
	Tuple right = find_maximum_subarray(A, mid+1, high);
	Tuple cross = find_max_crossing_subarray(A, low, mid, high);
	Tuple empty;
	empty.left = -1;
	empty.right = -1;
	empty.sum = 0;

	if ((left.sum >= right.sum) && (left.sum >= cross.sum) && (left.sum >= 0)){
	    return left;
	}
	else if ((right.sum >= left.sum) && (right.sum >= cross.sum) && (right.sum >= 0)){
	    return right;
	}
	else if (cross.sum >= 0){
	    return cross;
	}
	else {
	    return empty;
	}
    }
}


int main(){
	int arr[] = {-1, -2, -3, -5};
	int length = sizeof(arr)/sizeof(arr[0]);

	printf("Inputs: ");
	for(int i=0;i < length; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");

	Tuple tuple = find_maximum_subarray(arr, 0, length-1);

	printf("Result: %d %d %d", tuple.left, tuple.right, tuple.sum);
	printf("\n");

	return 0;
}
