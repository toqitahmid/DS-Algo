#include<stdio.h>
int main(){

    char name[10] = "Araf";

    for(int i = 0; i < sizeof(name); i++)
        printf("%c ", name[i]);
}