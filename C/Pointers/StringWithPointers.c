#include<stdio.h>
#include<string.h>

void YourName(char name[]){

    printf("Name : %s", name);
}
int main(){

    char name[100];
    printf("Enter your name : ");
    fgets(name,sizeof(name),stdin);

    YourName(name);
    return 0;
}