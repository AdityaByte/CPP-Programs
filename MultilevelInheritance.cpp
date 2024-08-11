// MultiLevel Inheritance
// A class can also be derived from an another class which is itself derived from some other class

#include<iostream>
using namespace std;

class ParentClass{
    public:
        ParentClass(){
            cout << "Parent class"<< endl;
        }
};

class ChildClass : public ParentClass{
    public:
        ChildClass(){
            cout << "Child class"<< endl;
        }
};

class GrandChildClass : public ChildClass{
    public:
        GrandChildClass(){
            cout << "Grand Child Class"<<endl;
        }
};

int main(){
    
    GrandChildClass obj;
    
    return 0;
}
