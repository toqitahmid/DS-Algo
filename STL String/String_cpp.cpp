#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    cin.ignore();
    char name[101];
    cin.getline(name,101);
    // cin >> name;

    cout << n << endl;
    cout << name << endl;
    return 0;
}