/*
Mutex :
For overcoming the problem of the race condition mutex are used.
Mutex refers to mutual exclusion locks means we just lock the shared resource like if we assigned two or more threads for performing task on the same resource so it is crucial that only one thread could write at once for this we apply mutual exclusion lock. 
*/

#include<iostream>
#include<thread>
#include<mutex> // For mutex
using namespace std;

int counter;
mutex mtx; // For using mutex you have to create an object of it.

void increment() {
    for(int i=0; i<100000; i++) {
        mtx.lock();
        counter++;
        mtx.unlock();
    }
}

int main() {
    thread t1(increment);
    thread t2(increment);
    t1.join();
    t2.join();
    
    cout << "Counter Value : " << counter; // Now it prints out 200000.
    return 0;
}
