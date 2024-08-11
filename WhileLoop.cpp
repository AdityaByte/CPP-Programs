// Loops : lops are used in programs to execute a few set of instructions over and over again
// While loop in the while loop we have to define a condition this loop runs till the conditon is true . we have to use that loop precisily because this will leads to an infinte loop also
// While loop - simple while loop , do while loop

#include<iostream>
using namespace std;

int main(){
    
    //Simple while loop
    int a = 1;
    while(a<=10){
        cout << a << endl;
        a++;
    }
    
    //Do while loop 
    do{
        cout << "hello world"<<endl;
        a++;
    }
    while(a<2);
    
    return 0;
}
