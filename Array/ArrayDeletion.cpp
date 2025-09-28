#include<bits/stdc++.h>
using namespace std;

int main(){

    int sz, pos;
    
    cout << "Enter array size : ";
    cin >> sz;

    int A[100];
    cout << "Enter " << sz << " elements into the array A : " << endl;

    for(int i = 0; i < sz; i++){
        cin >> A[i];
    }

    cout << "Enter position where you wanna to deleted : ";
    cin >> pos;

    if(pos < 0 || pos >= sz)
        return 0;
    
    for(int i = pos; i < sz-1; i++){

        A[i] = A[i+1];
    }
    sz--;

    for(int i = 0; i < sz; i++)
        cout << A[i] << " ";
    
    return 0;
}