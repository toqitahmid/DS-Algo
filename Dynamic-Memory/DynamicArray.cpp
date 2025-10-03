#include<bits/stdc++.h>
using namespace std;

int N;

int *returnArray(){
    
    cin >> N;
    int *A = new int[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    return A;
}
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int *A = returnArray();
    for(int i = 0; i < N; i++)
        cout << A[i] << " ";
    return 0;
}