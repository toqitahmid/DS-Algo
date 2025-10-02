#include<stdio.h>
#include<string.h>

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    char s1[101],s2[101];
    scanf("%s %s", s1, s2);
    strcat(s1,s2);
    printf("%s %s", s1, s2);
    return 0;
}