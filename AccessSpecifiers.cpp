// Access Specifiers - These keywords define how the members (atttributes and methods) of the class are being accessed.
// In C++ there are three access specifiers
// 1. public - public can accessed from anywhere just by creating instance
// 2. private - private members can only be accessed inside the class
// 3. protected - protected members can only be accessed outside the class when the class in inherited with some other class

#include<iostream>
using namespace std;

class ClassA{
    private:
        int a1;
        int b1;
        void func(){
            cout << "addition " << a1+b1 << endl;
        }
    
    public:
        int a2;
        int b2;
        int add(int a , int b){
            this->a2 = a;
            this->b2 = b;
            return this->a2+this->b2;
        }
    protected:
        int a3 = 21;
        int b3 = 12;
        void add(){
            cout << a3+b3 <<endl;
        }
};


int main(){
    
    ClassA obj;
    //obj.func(); // we cant access it
    cout << obj.add(10 , 20) << endl;
    //obj.add(); // This is also we cant access
    
    return 0;
}
