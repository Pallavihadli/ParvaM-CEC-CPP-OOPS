#include<iostream>
using namespace std;

class Person{
    private:
       string name;
       int age;

    public:
       void setPersonDetails(string n, int a){
          name = n;
          age = a;
       }

       void showPersonDetails(){
           cout << " My name is " << name <<", and I'm " << age << " years old." << endl;
       }
      
};

class Employee : public Person{ // Person -> Employee
    private:
       string company_name, emp_id;

    public:
       void setEmployeeDetails(string compName, string empId){
            company_name = compName;
            emp_id = empId;
       }

       void showEmployeeDetails(){
            cout << " I'm working in " << company_name << ", My Employee ID is: " << emp_id <<endl;
       }
};

class Developer : public Employee{ // Person -> Employee -> Developer
    private:
       string deptName;
       int experience;

    public:
       void setDeveloperDetails(string dept, int exp){
            deptName = dept;
            experience = exp;
       }

       void showDeveloperDetails(){
            cout << "I'll be working in " << deptName << "depertment. I've " << experience << "years of experience: " << endl;
       }

};

int main(){
    string personName, companyName, dept_name, employe_id;
    int personAge, devExperience;

    cout << "Enter your Name & Age:";
    cin >> personName >> personAge;

    cout << "Enter your Company Name & Employee ID:";
    cin >> companyName >> employe_id;

    cout << "Enter your Dpertment Name & Years of Experience:";
    cin >> dept_name >> devExperience;

    Developer dev1; // Object of Developer Class
    //dev1.name - Cannot access private mambers out of the class(Person)
    //dev1.company_name - Cannot access private mambers out of the class (Employee)
    //dev1.deptname - Cannot access private mambers out of the class (Developer)
    Employee emp1;
    emp1;

    dev1.setPersonDetails(personName, personAge);

    dev1.setEmployeeDetails(companyName, employe_id);

    dev1.setDeveloperDetails(dept_name, devExperience);

    dev1.showPersonDetails();
    dev1.showEmployeeDetails();
    dev1.showDeveloperDetails();
}