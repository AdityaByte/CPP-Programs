// Virtual function in cpp
// A Virtual function is the member function which is declared inside the base class and is re-defined by the derived class.
// When you refer a derived class object using a pointer or a reference to the base class, you can call a virutal function for that object and execute the derived class's version of the function.
// Virtual function simply refers to the dynamic method dispatch for late binding means the function call is resolved at the runtime being respective of the type of whose object is being created.
// If we dont specify the virtual keyword over the function then the function called is resolved at compile time.

#include<iostream>
using namespace std;

class Base {
  public:
    virtual void print() {
        cout << "Print function is called of base class" << endl;
    }
    
    void show() {
        cout << "Show function is called of Base class" << endl;
    }
};

class Derived: public Base {
  public:
    void print() {
        cout << "Print function is called of Derived class" << endl;
    }
    
    void show() {
        cout << "Show function is called of Derived class" << endl;
    }
};

int main() {
    Base *b1;
    Derived d1;
    b1 = &d1;
    b1->print();
    b1-> show();
    return 0;
}
