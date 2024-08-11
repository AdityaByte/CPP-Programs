/*
A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions,
and they are important for reusing code:
Define the code once, and use it many times.
*/

#include <iostream>
using namespace std;

void func(string name){
    cout << "your name is : " << name << endl;
}

int func(int number){
    return number;
}

int main(){
    
    func("Aditya");
    
    int num = func(1212);
    cout << "The number is : " << num << endl;
    
    return 0;
}
