#include<bits/stdc++.h>
using namespace std;

int linearSearch(int findNum, int array[], int sz){

    for(int i = 0; i < sz; i++){

        if(array[i] == findNum)
            return array[i];
    }
}

int main(){

    int num;
    cout << "Enter any number : ";
    cin >> num;

    int sz;
    cout << "Enter array size : ";
    cin >> sz;

    cout << "Now enter array elements : " << endl;

    int array[sz];
    for(int i = 0; i < sz; i++){

        cin >> array[i];
    }

    int findNum = linearSearch(num,array,sz);

    cout << "The number is : " << findNum ;
    return 0;
}