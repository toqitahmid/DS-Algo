#include<bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cout << "Enter array size : ";
    cin >> N;

    int A[N];

    cout << "Enter array elements : " << endl;

    for(int i = 0; i < N; i++)
        cin >> A[i];
    
    int i = 0;
    int j = N-1;

    while (i <= j)
    {
        /* code */
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        
        i++;
        j--;
    }

    cout << "After reversing elements : ";
    for(int i = 0; i < N; i++)
        cout << A[i] << " "; 
    
    return 0;
}