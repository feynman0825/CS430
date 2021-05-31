#include <stdio.h>
#include <stdlib.h>

#define N 3

int** square_matrix_multiply(int A[][N], int B[][N]){
    int** C = (int**)malloc(N * sizeof(int*));

    for(int i=0;i<N;i++){
    	C[i] = (int*)malloc(N * sizeof(int*));
        for(int j=0;j<N;j++){
	    C[i][j] = 0;
	    for(int k=0;k<N;k++){
		C[i][j] += A[i][k] * B[k][j];
	    }
	}
    }
    return C;
}


int main(){
    int A[N][N] = {0, 0, 0, 1, 1, 1, 2, 2, 2};
    int B[N][N] = {{0, 1, 2}, {0, 1, 2}, {0, 1, 2}};

    printf("Inputs A: \n");
    for(int i=0;i < N; ++i){
        for(int j=0;j < N; ++j){
    	    printf("%d ", A[i][j]);
	}
        printf("\n");
    }
    printf("\n");

    printf("Inputs B: \n");
    for(int i=0;i < N; ++i){
        for(int j=0;j < N; ++j){
    	    printf("%d ", B[i][j]);
	}
        printf("\n");
    }
    printf("\n");

    int** C = square_matrix_multiply(A, B);

    printf("Result: \n");
    for(int i=0;i < N; ++i){
        for(int j=0;j < N; ++j){
    	    printf("%d ", C[i][j]);
	}
    	free(C[i]);
        printf("\n");
    }
    printf("\n");

    free(C);

    return 0;
}
