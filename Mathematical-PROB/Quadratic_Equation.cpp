#include<bits/stdc++.h>
using namespace std;

int countDis(int a, int b, int c){

    return ((b*b)-(4*a*c));
}

int main(){

    int a,b,c;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;

    int dis = countDis(a,b,c);

    if(dis > 0){

        int X1 = (-b+sqrt(dis))/(2*a);
        int X2 = (-b-sqrt(dis))/(2*a);

        cout << X1 << " " << X2;
    }
    else if(dis == 0){

        int X = -b/(2*a);
        cout << X << " is an unique root";
    }
    else{
        cout << "The roots are not real!";
    }
}