#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int *A = new int[3];
    for(int i = 0; i < 3; i++)
        cin >> A[i];
    
    int B[5];
    for(int i = 0; i < 3; i++)
        B[i] = A[i];
    
    B[3] = 4;
    B[4] = 5;
    delete[] A;

    for(int i = 0; i < 5; i++)
        cout << B[i] << " ";
        
    cout << A[1];
    return 0;
}