/*
Exception Handling in C++:
Exceptions are the unexpected error that occurs through a program if you had not written something correct as the compiler understand that then exception occurs.
Exceptions are classified as:
1. Compile time exceptions
2. Run time exceptions

1=> Compile time exceptions are occured when the program compile the source code that you have been written and it can be syntax error or something so that it returns an compile time exception.
2=> Run time exceptions are occured when the user input some data and there is some unusal situation where the program stops out.

For handling the exception c++ has some ways one of them is the try catch block and throw is for throwing some exception that you might feel that this particular situation will throw up some error to the code.

Note - A try block can have multiple catch blocks for handling different exceptions.
*/

#include<iostream>
#include<stdexcept> // For runtime_error method.
#include<exception> // For handling out all exception.
using namespace std;

void exceptionMethod() {
    throw runtime_error("exception occured dude");
}

int main() {
    
    float numerator, denominator, result;
    cout << "enter two numbers:"<<endl;
    cin>>numerator>>denominator;
    
    try {
        if(denominator==0) {
            throw denominator;
        }
        result = numerator/denominator;
    }
    catch(int ex) {
        cout << "Number cannot be divided by zero exception" << endl;
    }
    
    cout << "Division is: " << result << endl;
    
    // If you don't know which exception is throwing a particular block of code at runtime then we can do a in general way of handling all exception using ... (spread operator).
    
    try {
        exceptionMethod();
    }
    catch(...) {
        cout << "Exception occured dude" << endl;
    }
    
    // Catching all exceptions using the exception standard library.
    try {
        exceptionMethod();
    }
    catch(const exception& e) {
        cout << "Got some exception" << endl;
    }
    
    return 0;
}
