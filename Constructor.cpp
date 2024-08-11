// Constructor - A constructor in C++ is a special method that is automatically called when an object of a class is created.
//To create a constructor, use the same name as the class, followed by parentheses ():

#include <iostream>
using namespace std;

class Class1{
    public: // access specifier
        // This is the default constructor of the class
        Class1(){
            cout << "I am the constructor";
        }
        // Parametrized constructor
        Class1(string name ,string course){
            cout << "Name -> " << name << endl;
            cout << "Course -> " << course << endl;
        }
        // Constructor overloading 
        Class1(int a , int b){
            cout << a+b << endl;
        }
};

int main(){
    Class1 obj;
    Class1 obj1("Aditya" , "C++ course");
    Class1 obj2(10,20);
    return 0;
}
