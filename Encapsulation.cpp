// Encapsulation
// Encapsulation can be referred as the bundling of data by means of attributes and function inside a class
// The meaning of encapsulation is to make sure - the sensitive data is hidden from user
// To achieve this you must declare the attributes/properties of the class private
// If you want others to modify the details we can make public getter and setter for manipulating the data
// The advantage of is encapsulation is that the user can access a particular data 

#include <iostream>
using namespace std;

class Employee{
    private:
        int id = 101;
        string name = "aditya";
        int salary;
    public:
        void setSalary(int salary){
            this->salary = salary;
        }
        int getSalary(){
            return this->salary;
        }
};

int main(){
    
    Employee e1;
    e1.setSalary(40000);
    cout << e1.getSalary();
    
    return 0;
}
