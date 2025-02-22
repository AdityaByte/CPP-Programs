// Aggregation in cpp
// Aggregation has a `has-a` relationship 
// It is the relationship between the objects of two different classes in which they can exists independently without owning each other.

#include<iostream>
using namespace std;

class Course {
    private:
        string courseName;
        int courseDuration;
        
    public:
        Course(string cn, int cd) : courseName(cn), courseDuration(cd) {}
        string getCourseName() {
            return this->courseName;
        }
};

class Student {
  private:
    string studentName;
    int age;
    Course *course;
    
  public:
    Student(string n, int a, Course* c) : studentName(n), age(a), course(c) {}
    void getStudentInfo();
};

void Student::getStudentInfo() {
    cout << "Student : " << studentName << " of age : " << age << " enrolled in this course " << course->getCourseName() << endl;
}

int main() {
    Course course1("Python django", 10);
    Student student1("Aditya", 20, &course1);
    student1.getStudentInfo();
    return 0;
}
