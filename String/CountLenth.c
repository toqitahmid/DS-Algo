#include<stdio.h>
#include<string.h>

int main(){

    char name[101];
    printf("Enter your name : ");
    fgets(name,sizeof(name),stdin);

    int count = 0;

    for(int i = 0; name[i] != '\0'; i++)
        count++;
    
    printf("The lenth of my name is : %d\n", count);
    printf("The lenth of my name using strlen function is : %d\n", strlen(name));
    return 0;
}