/*
String in cpp : 
String is the collection of characters and we can also elaborate it as the sequence of characters which are being terminated by the null character whose value in ASCAII code is 0.
And discussing about some methods that are used in c strings and that are come from the cstring library.
1. strcpy() : for copying one string to another.
2. strcat() : This function is concating two strings.
3. strlen() : for finding out the length of the string.
4. strcmp() : for comparing two strings.
5. strchr() : for returning a pointer to the first occurance of that particular character.
6. strstr() : for returning a pointer to the first occurance of that particular string.
*/

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s1[] = "aditya";
    char s2[10];
    
    // Copying the string s1 to string s2
    strcpy(s2, s1);
    cout << "String s2 is " << s2 << endl;
    
    // Concating two strings in c++ using functions
    char string1[] = "aditya ";
    char string2[] = "pawar";
    strcat(string1, string2); // It concates the string 2 to string 1
    cout << "Now the String1 became: " << string1 << endl; 
    
    // For finding out the length of a string we have strlen function.
    cout << strlen(string1) << endl; // Prints out 12.
    
    // IF we want to compare two string for that we have a function called as strcmp for that.
    // If the function returns out 0 means the two string are same if it returns less than 0 then s1 < s2 and if it returns greater than zero then s1 > s2.
    
    char str1[] = "aditya";
    char str2[] = "aditya";
    cout << strcmp(str1, str2);
    
    // strchr() - It is the function which was used for returning a pointer to the first occurance of the character.
    
    char st1[] = "aditya-pawar";
    cout << strchr(st1, 'y') << endl;
    
    // strstr() - It returns the pointer to the first occurance of the string in cpp.
    char sent[] = "I am learning for my exam cause c++ is taught there.";
    cout << strstr(sent, "exam") << endl;
    
    // At the end we can also create a string object using this
    string name = "aditya pawar";
    cout << "Name is " << name << endl;
    
    return 0;
}
