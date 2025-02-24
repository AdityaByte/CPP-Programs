/*
Race condition - 
Race condition is occurs when the multiple threads are trying to modify the shared resource at the same time then at this case the race condition occurs in cpp.
*/

#include<iostream>
#include<thread>
using namespace std;

int counter;

void increment() {
    for(int i=0; i<100000; i++){
        counter++;
    }
}

int main() {
    
    thread t1(increment);
    thread t2(increment);
    t1.join();
    t2.join();
    // The value of the counter is 
    cout << "counter : " << counter << endl; // Excepted value should be 200000 but it gives some random value cause the two thread which we assigned can write at a same time too. That's condition is the race condition.
    
    return 0;
}
