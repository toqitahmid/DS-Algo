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

Student* object(){

    Student* Araf = new Student("Araf", 856294, 94);
    Student* p = Araf;
    return p;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Student* p = object();

    cout << p->name << " " << p->id << " " << p->roll << endl;
    return 0;
}