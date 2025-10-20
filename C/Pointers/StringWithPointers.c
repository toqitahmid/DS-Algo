#include<stdio.h>
#include<string.h>

void YourName(char name[]){

    printf("Name : %s", name);
}



int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    char name[100];
    printf("Enter your name : ");
    fgets(name,sizeof(name),stdin);

    YourName(name);
    return 0;
}