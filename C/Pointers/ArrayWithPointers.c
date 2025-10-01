#include<stdio.h>

void passingArray(int A[], int N){

    printf("After passing array into another function : \n");
    for(int i = 0; i < N; i++)
        printf("%d ", A[i]);
}

int main(){

    int N;
    printf("Enter array size : ");
    scanf("%d", &N);
    int A[N];

    printf("Enter array elements : \n");
    for(int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    passingArray(A,N);
    return 0;
}