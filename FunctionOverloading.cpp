// FunctionOverloading - 
// Two or more methods can have same name but different paramters such methos are called overloaded methods

#include<iostream>
using namespace std;

class Class1{
  public:
  //Here we have differnt function with differnt parameters and datatypes
    void func(){
        cout << "function without parameter and return type" << endl;
    }
    int func(int a){
        return a;
    }
    bool func(bool b){
        return b;
    }
    void func(string s){
        cout << s;
    }
};

int main(){
    
    Class1 obj;
    obj.func();
    cout << obj.func(10) << endl;
    cout << obj.func(true) << endl;
    obj.func("aditya");
    
    return 0;
}
