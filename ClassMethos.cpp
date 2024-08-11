// Class Methods
// Function - is the block of code which performs a particular function
// Function inside the class is known as method

#include <iostream>
using namespace std;

class Class1{
    private:
        int a;
    
    public:
        //setter of variable a
        void setA(int a){
          // This this-> pointer is used for accessing the local variable just like in java
            this->a = a;
        }
        //getter of variable a
        int getA(){
            return a;
        }
        void func(); // Declaration of function func
};

void Class1::func(){
    cout << "I am the outside function of class Class1";
}

int main(){
    Class1 obj; // Object of Class1
    obj.setA(10);
    int result = obj.getA();
    cout << "Result is : " << result << endl;
    obj.func();
}
