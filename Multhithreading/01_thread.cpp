/*
Multithreading in c++ :
Multithreading is a technique where a program can run multiple tasks concurrently, instead of executing them one by one in a sequential way.
Multithreading helps in executing tasks parallel, utilizing the multi core cpu power and improving the application performance.
For creating out a thread c++ has a standard library thread for that.
*/

#include<iostream>
#include<thread>
using namespace std;

void task1(string name) {
    for(int i=0; i<5; i++) {
        cout << name << endl;
    }
}

int main() {
    // For creating out a thread you have to create a thread object 
    //thread thread_object(callable, parameters); // This is how we can create a thread and we have to pass a callable to it callable can be a function, anonymous function, static member function, non-static member function too.
    
    thread t1(task1, "aditya");
    thread t2(task1, "yeshank");
    
    t1.join(); // For waiting for the thread to complete.
    t2.join();
    
    // Note - The order is not necessary that first the t1 thread process then the thread t2 any thread can process depending upon the os which process it has to schedule.
    
    
    return 0;
}
