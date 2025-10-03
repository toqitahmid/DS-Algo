#include<bits/stdc++.h>
using namespace std;

class Student{

    public:

    string name;
    int id;
    int roll;

    Student(string name, int id, int roll){

        this->name = name;
        this->id = id;
        this->roll = roll;
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Student student1("Araf", 856294, 94);
    Student student2("Jannat", 856290, 90);

    cout << student1.name << " " << student1.id << " " << student1.roll << endl;
    cout << student2.name << " " << student2.id << " " << student2.roll << endl;
    return 0;
}