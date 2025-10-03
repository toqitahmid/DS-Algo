#include<bits/stdc++.h>
using namespace std;

class Student{

    public:

    char name[101];
    int id;
    int roll;
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Student student1, student2;
    cin.getline(student1.name,101);
    cin >> student1.id >> student1.roll;

    cin.ignore();

    cin.getline(student2.name, 101);
    cin >> student2.id >> student2.roll;

    cout << student1.name << " " << student1.id << " " << student1.roll << endl;
    cout << student2.name << " " << student2.id << " " << student2.roll << endl;
    return 0;
}