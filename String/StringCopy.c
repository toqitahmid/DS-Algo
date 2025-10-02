#include<stdio.h>
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    char string1[101],string2[101];
    scanf("%s %s", string1, string2);

    for(int i = 0; i <= strlen(string2); i++)
        string1[i] = string2[i];
    
    printf("%s %s", string1, string2);
    return 0;
}