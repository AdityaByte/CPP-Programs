// Operator overloading
// It is the type of static polymorphism 
// Giving different meaning to the operator in different context.
// Some of the operator which are not overloaded are ternary operator (?:) and scope resolution operator (::) and Class member access operator (.).

#include<iostream>
using namespace std;

class Complex {
  private:
    int real, img;
  public:
    Complex(int r=0, int i=0) {
        this->real = r;
        this->img = i;
    }
    
    void print() {
        cout << real << " + " << img << "i" << endl;
    }
    
    // It just basically a special type of function which was used for overloading the operator here it is returning Complex as a object.
    Complex operator +(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main() {
    Complex c1(1,2);
    Complex c2(2,4);
    Complex c3;
    c3 = c1 + c2; // Simpilar to Complex c3 = c1.add(c2) function.
    c3.print();
    return 0;
}
