#include<bits/stdc++.h>
using namespace std;

void inputArray(int array[], int sz){

    cout << "Enter elements of array : " << endl;

    for(int i = 0; i < sz; i++)
        cin >> array[i];
}

void InsertionSort(int array[], int sz){

    int i,j,item;
    for(i = 1; i < sz; i++){

        item = array[i];
        j = i-1;
        while(j >= 0 && array[j] > item){

            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = item;
    }
}

void outputArray(int array[], int sz){

    cout << "Elements of array : " << endl;

    for(int i = 0; i < sz; i++)
        cout << array[i] << " ";
}

int main(){

    int sz;
    cout << "Enter array size : ";
    cin >> sz;

    int array[sz];
    inputArray(array,sz);
    InsertionSort(array,sz);
    outputArray(array,sz);
}