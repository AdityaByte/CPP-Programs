/*
Friend Class - A Friend class can access the private and protected members of the other class and it was declared as a friend. Sometimes it will be usefull that we have a class who can only access the private and protected members of the other class
*/


#include <iostream>

class ClassA{
    private:
        int a;
        int b;
    public:
        ClassA(){
            a = 10;
            b = 40;
        }
        
        // defining a friend class
        friend class FriendClass;
};

class FriendClass{
    public:
        void sum(ClassA& obj){
            std::cout << obj.a + obj.b << std::endl;
        }
};

int main(){
    
    ClassA classAObject;
    FriendClass fObject;
    fObject.sum(classAObject);
    
    return 0;
}
