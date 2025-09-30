#include<stdio.h>

void passByValue(int x){

    x = 20;
}
int main(){

    int x;

    printf("Enter X = ");
    scanf("%d", &x);
    passByValue(x);

    printf("After calling function with pass by value : %d", x);
}