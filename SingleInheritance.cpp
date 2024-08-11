// Inheritance - Inheritance is the fundamental concept in OOP that allows the new class to acquire the propeties , methods and behavior from the existing class.
// Inheritance allows code reusability and the behavior of heirarchal manner is comes from inheritance .
// It is the implementation of polymormorphism
// Inheritance can be acheived in the following way in C++
// single inheritance , multilevel inheritance and multiple inheritance

// Here we practasing single inheritance

#include <iostream>
using namespace std;

class Base{
    protected:
        int a;
    
    public:
        void func(){
            cout << "i am the func of the base class" << endl;
        }
};

class Derived : public Base{
    public:
        void func1(){
            cout <<"i am the func of derived class";
        }
};

int main(){
    Derived obj;
    obj.func();
    obj.func1();
    
    return 0;
}
