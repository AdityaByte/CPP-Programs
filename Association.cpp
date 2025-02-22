// Association Example in cpp
// Association can be defined as the relation between two classes, it is the loose relationship between classes.
// Here one classes uses another classes but does not own it.

#include<iostream>
using namespace std;

class Student;

class Course {
    public:
        string courseName;

        Course(string cn) : courseName(cn) {}
        
        void getStudentInfo(Student& student);
};

class Student {
    public:
        string name;
        
        Student(string n): name(n) {}
        
        void getCourse(Course& course) {
            cout << this->name << " is enrolled in this course " << course.courseName << endl;
        }
};

void Course::getStudentInfo(Student& student) {
    cout << this->courseName << " is enrolled by " << student.name;
}

int main() {
    Course course("Java full stack");
    Student student("Aditya pawar");
    student.getCourse(course);
    course.getStudentInfo(student);
}
