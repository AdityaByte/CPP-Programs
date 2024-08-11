// Loops - Sometimes we want our program to repeat a few set of instructions over and over again so we use loops for that
// Here in this code we are practacing for loop

#include <iostream>
using namespace std;

int main(){
    
    // It is the simple for loop
    for(int i=1; i<=10; i++){
        cout << "Hello world " << i <<endl; // This loop runs 10 times 
    }
    
    // Nested for loop 
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    // For each loop
    string names[] = {"aditya" , "sohan" , "mohan" , "gohan" , "vegeta"};
    for(string name : names){
        cout << name << endl;
    }
    
    return 0;
}
