#include<bits/stdc++.h>
using namespace std;

void inputArray(int array[], int sz){

    cout << "Enter array elements : " << endl;
    for(int i = 0; i < sz; i++){
        cin >> array[i];
    }
}

void selectionSort(int array[], int sz){

    int i,j, min_idx;

    for(i = 0; i < sz-1; i++){

        min_idx = i;
        for(j = i+1; j < sz; j++){

            if(array[j] < array[min_idx]){
                min_idx = j;
            }
        }

        if(min_idx != i){
            swap(array[i],array[min_idx]);
        }
    }
}

void outputArray(int array[], int sz){

    cout << "Sorted elements are : " << endl;
    for(int i = 0; i < sz; i++){
        cout << array[i] << endl;
    }
}

int main(){

    int sz;
    cout << "Enter array size : ";
    cin >> sz;

    int array[sz];
    inputArray(array,sz);
    selectionSort(array,sz);
    outputArray(array,sz);
}