#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    char name[101];
    int roll;
    int id;
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    Student Araf,Toqi;
    cin.getline(Araf.name,101);
    cin >> Araf.roll >> Araf.id;

    cin.ignore();

    cin.getline(Toqi.name,101);
    cin >> Toqi.roll >> Toqi.id;

    cout << "First Student's info : " << Araf.name << " " << Araf.roll << " " << Araf.id << endl;
    cout << "Second Student's info : " << Toqi.name << " " << Toqi.roll << " " << Toqi.id << endl;

    return 0;
}