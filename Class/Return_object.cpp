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

Student object(){

    Student obj("Araf", 856294, 94);
    return obj;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    Student student = object();

    cout << student.name << " " << student.id << " " << student.roll <<endl;
    return 0;
}