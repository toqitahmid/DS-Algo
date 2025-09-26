#include<bits/stdc++.h>
using namespace std;

int binarySearch(int findNum, int arr[], int sz){

    int right = 0;
    int left = sz - 1;

    while (right <= left)
    {
        /* code */
        int mid = (right+left)/2;

        if(arr[mid] == findNum){
            return mid;
        }
        else if(arr[mid] > findNum){
            left = mid - 1;
        }
        else if(arr[mid] < findNum){
            right = mid + 1;
        }
    }
    return -1;
    
}
int main(){

    int num, sz;
    cout << "Enter any number : ";
    cin >> num;

    cout << "Enter array size : ";
    cin >> sz;

    int arr[sz];
    cout << "Enter array elements : " << endl;

    for(int i = 0; i < sz; i++){

        cin >> arr[i];
    }
    int findNum = binarySearch(num,arr,sz);

    if(findNum != -1)
        cout << "Found the element";
    else
        cout << "Not found the element";
}