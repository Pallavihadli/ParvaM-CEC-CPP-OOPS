#include<iostream>
using namespace std;

class Employee{
    private:
       string employeeID, employeeName;
       int experience;
       float salary;

    public:
       void addDetails(string id, string name, int exp, float salary){
            employeeID = id;
            employeeName = name;
            experience = exp;
            this->salary = salary;
       }

       void showDetails(){
            cout << " The employee with name " << employeeName << " bearing " << employeeID << " having " << experience << " years of experience and receives a salary of Rs. " << salary << " /- ";

       }
};

int main(){
    string empName, empID;
    int empExp;
    float empSalary;

    cout << " Enter your Name, Employee-ID, Years of Experience & salary: ";
    cin >> empName >> empID >> empExp >> empSalary;

    Employee emp1; //Object created
    Employee *empPtr = &emp1;

    //Using the pointer we are assibning the value to the objectusing the pointer Dereferencing & arrow Operator
    (*empPtr).addDetails(empID, empName, empExp, empSalary);
    (*empPtr).showDetails();

    //Using the pointer we are assibning the value to the objectusing the pointer Dereferencing & arrow Operator
    Employee *ptrEmp = new Employee;
    ptrEmp->addDetails("PM123","ABC",3,50000.00);
    ptrEmp->showDetails();
}