#include<stdio.h>
int main(){

    char name[100];

    printf("Enter your name : ");
    fgets(name,sizeof(name),stdin);
    printf("%s", name);
}