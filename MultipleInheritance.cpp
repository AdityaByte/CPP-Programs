  // Mutliple Inheritance
// A class can also be dervied from more than one base classes this concept is known as multiple inheritance which is not supported by java but supported by c++

#include <iostream>
using namespace std;

class Base1{
    public:
        Base1(){
            cout << "base 1" << endl;
        }
};

class Base2{
    public:
        Base2(){
            cout << "base 2" << endl;
        }
};

class DerivedClass : public Base1 , public Base2{
    public:
        DerivedClass(){
            cout << "Derived class" << endl;
        }
};

int main(){
    
    DerivedClass obj;
    
    return 0;
}
