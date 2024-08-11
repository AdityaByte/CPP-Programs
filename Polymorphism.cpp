// Polymorphism
// Polymorphism can be simmply referred as one entity many forms
// Polymorphism is the implementaion of the inheritance

#include<iostream>
using namespace std;

class Car{
    public:
        void topSpeed(){
            cout << "Topspeed - 240km/hr" << endl;
        }
};

class Lamborhgini : public Car{
    public:
        void topSpeed(){
            cout << "Topspeed - 400km/hr" << endl;
        }
};

class Porshe : public Car{
    public:
        void topSpeed(){
            cout << "Topspeed - 430km/hr" << endl;
        }
};

int main(){
    Lamborhgini lambo;
    lambo.topSpeed();
    return 0;
}
