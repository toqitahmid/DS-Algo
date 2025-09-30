#include<stdio.h>
int main(){

    int X = 10;
    printf("%d\n", X);
    printf("%p\n", &X);
    
    int* ptr;
    ptr = &X;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

}