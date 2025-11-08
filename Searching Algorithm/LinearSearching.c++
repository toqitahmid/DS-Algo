#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int Asize;
    cin >> Asize;
    int A[Asize];

    for(int i = 0; i < Asize; i++)
        cin >> A[i];
    
    int item;
    cin >> item;

    bool found = false;
    for(int i = 0; i < Asize; i++){
        if(A[i] == item){
            found = true;
            break;
        }
    }
    if(!found)
        cout << "Item not found!" << endl;
    else
        cout << "Item found" << endl;
    return 0;
}