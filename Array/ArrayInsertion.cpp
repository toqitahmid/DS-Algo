#include<bits/stdc++.h>
using namespace std;

int main(){

    int sz, item, nth_pos;

    cout << "Enter array size : ";
    cin >> sz;
    int A[100];
    cout << "Enter " << sz << " array's elements : " << endl;

    for(int i = 0; i < sz; i++)
        cin >> A[i];
    
    cout << "Enter the element which you want to inserted: ";
    cin >> item;
    cout << "Now enter the position where you want to insert data (0-" <<sz<<") : " ;
    cin >> nth_pos;

    if(nth_pos < 0 || nth_pos > sz){
        return 1;
    }

    for(int i = sz; i >= nth_pos; i--){

        A[i] = A[i-1];
    }

    A[nth_pos] = item;
    sz++;

    cout << "After inserting elements : " << endl;
    for(int i = 0; i < sz; i++)
        cout << A[i] << " ";
}