#include<iostream>
using namespace std;

// Syntax
// class class_name // class Declaration
class Student{
    public:
       string name, college, branch;//Data
       int sem;

       void show(){// Member Function
            cout << "Name: "<< name << endl;
            cout << "College: "<< college << endl;
            cout << "Branch: "<< branch << endl;
            cout << "Semester: "<< sem << endl;


       }
};

int main(){
    Student student1; // Object Creation
    student1.name="Pallavi"; // assigning the values to the class using object
    student1.college="CEC";
    student1.branch="AIML";
    student1.sem=6;
    
     Student student2; // Object Creation
    student2.name="Rachana"; // assigning the values to the class using object
    student2.college="CEC";
    student2.branch="ISE";
    student2.sem=4;

    student1.show();
    student2.show();
    
}