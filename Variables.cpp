// Variables - Variable are the container that stores a value. The value can be changed during the execution of the program
// Declartion of a variable - for declaring a variable in cpp you have to firstly define the datatype and then the name of the variable
// Initialization of a variable - after intializing we have to initialize the variable by giving some value to it 

#include<iostream>
using namespace std;

int main(){
    int a; // Declaration of variable of name a and type Integer
    a = 10; // Initializing the value to the variable
    
    // We can declare and intialize the variable in one line also
    string name = "aditya";
    
    cout << "The value of a : " << a << endl;
    cout << "Name : " << name << endl;
    return 0;
}
