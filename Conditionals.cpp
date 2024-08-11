// Conditional statement - conditional statements are used for decison making 
// In C++ there are two conditional statement - If Else Statement and Switch statement
// If - else statement types
// If statement , If else statement , If else if statement , Nested If statement

#include <iostream>
using namespace std;

int main(){
    
    int time;
    
    cout << "Enter the time : ";    
    cin >> time;
    
    //If else ladder statement
    
    if(time >= 6 && time <= 12){
        cout << "Good moring sir" <<endl;
    }
    else if(time > 12 && time <= 16){
        cout << "Good afternoon sir" << endl;
    }
    else if(time > 16 && time <= 19){
        cout << "Good evening sir" << endl;
    }
    else{
        cout << "Good night sir" << endl;
    }
    
    // Nested if else
    
    int age;
    cout << "Enter the age : ";
    cin >> age;
    
    if(age > 10){
        if(age == 18){
            cout << "You can drive" << endl;
        }
        else if (age == 25){
            cout << "You can get your degree" << endl;
        }
    }
    
    // Switch statement
    
    int day;
    cout << "Enter the day by number : ";
    cin >> day;
    
    switch(day){
        case 1:
            cout << "monday";
            break;
        case 2:
            cout << "tuesday";
            break;
        case 3: 
            cout << "wednesday";
            break;
        case 4: 
            cout << "thrusday";
            break;
        case 5:
            cout << "friday";
            break;
        case 6: 
            cout << "saturday";
            break;
        case 7:
            cout << "sunday";
        default:
            cout << "no day";
    }
    
    return 0;
}
