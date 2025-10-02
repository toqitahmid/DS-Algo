#include<stdio.h>
#include<string.h>

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    char string1[101], string2[101];
    scanf("%s %s", string1, string2);

    int i = strlen(string1);
    for(int j = 0; j <= strlen(string2); j++){

        string1[i] = string2[j]; 
        i++;
    }

    printf("%s %s", string1, string2);
    return 0;
}