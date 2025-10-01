#include<stdio.h>
int main(){

     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    char name[100];

    fgets(name,sizeof(name),stdin);
    printf("%s", name);
}