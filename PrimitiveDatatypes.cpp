// Dataypes
// C++ is a statically typed language so we have to declare the dataypes while declaring a variable.
// Since , data types gives the information that which type of data is has to stored in the memory
/*
In C++ dataypes is primarily divided in three types
1. Primitive dataypes - integer , boolean , float , double , char , wide character
2. Derived datatypes - function , array , pointer , reference
3. Userdefined datatypes - Class , Structure , enum , Union , typedef
*/

// In this program we are discussing the primitive datatypes

#include <iostream>
using namespace std;

int main(){
    // Here we are defining datatypes
    int number1 = 100; // int - integer - size - 4 byte
    bool boolean1 = true; // bool - boolean can be true and false 
    float float1 = 12.1f; // float - floating point number - 4 byte
    double double1 = 12.11; // double - double  - 8 byte
    char character1 = 'c'; // char - character - 1 byte
    
    
    cout << number1 << endl << boolean1 << endl << float1 << endl << double1 << endl << character1 << endl;
    
    return 0;
}
