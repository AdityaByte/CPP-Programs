// Array - An Array is the collection of similar type of datatype having contignous memory allocation
// Array index if started from 0 like the 1st element is at the 0th index and the nth element is at the (n-1)th index
// Array is created in c++ like that
// Datatype name[size_of_array] = (elements of an array);
// If we dont define the size then it acquires the size of how many elements you have created during runtime

#include <iostream>
using namespace std;

int main(){
    
    // Creating an array
    int arr[] = {1,2,3,4,5};
    cout << arr[0] << endl;
    
    string names[3];
    names[0] = "aditya";
    names[1] = "sohan";
    names[2] = "mohan";
    
    // Here we can use for each loop for displaying elements
    for(string name : names){
        cout << name << endl;
    }
    
    // Creating a multidimensional array
    int arr_multi[2][2] = {{1,2} , {3,4}};
    cout << arr_multi[1][0]; // output -> 3
    
    return 0; 
}
