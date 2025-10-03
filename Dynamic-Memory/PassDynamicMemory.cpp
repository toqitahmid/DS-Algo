#include<bits/stdc++.h>
using namespace std;

int *p;
void dynamicMem(){

    int *x = new int;
    *x = 11;
    p = x;
    cout << "fun -> " << *p << endl;
    return;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    dynamicMem();
    cout << "main -> " << *p << endl;
    return 0;
}