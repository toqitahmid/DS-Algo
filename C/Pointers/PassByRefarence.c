#include<stdio.h>

void PassByRef(int *x){

    *x = 20;
}
int main(){

    int x;
    printf("Enter X : ");
    scanf("%d", &x);

    PassByRef(&x);

    printf("After calling function with referance : %d", x);
    return 0;
}