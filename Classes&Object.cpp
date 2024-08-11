// Classes And Object
// Classes can be defined as the blueprint for the object. A class can have variables which are known as data members in c++ and the function inside the class are know as the member function
// Object is the instance of the class 
// Classes and objects are the pattern of the object oriented programming for maintaning the code in a proper structural manner that we can define the one thing and can use it anywhere these are the specifications of a class.

#include <iostream>
using namespace std;

// Creating a class named Class1
class Class1{
    
    //These are the datamember
    int a;
    string name;
    bool b;
    
    // Public is the access specifier for accessing the class inside the whole code by the help of instance
    public:
    
        //function1 is the function inside the class Class1 known as member function
        void function1(string s){
            cout << "hello world " << s << endl;
        }
};

int main(){
    // Creating objects of class Class1
    Class1 obj1;
    Class1 obj2;
    
    // Calling the function1 by the help of objects
    obj1.function1("aditya");
    obj2.function1("somebody");
    
    return 0;
    
}
