#include<iostream>
using namespace std;

class  Name{
    private:
       string name, branch;
       int sem;
    public:
       void setName(string n){
            name = n;
       }

       //as the parameter name & member name is same, it will assign the garbge value
       //To avoid the issue, we can use 'this' keyword to assign the parameter value to the private member 

       void setDetails(string branch, int sem){
            branch = branch;
            sem = sem;
       }

       void showName(){
            cout << "Your name is" << name << endl;
       }

       void showDetails(){
            cout << "You're from " << branch << "branch, and you're studing in" << sem << " sem. " << endl;
       }
  
};

int main(){
    string studentName, studentBranch;
    int studentSem;

    cout << "Enter your name, branch & sem:";
    cin >> studentName >> studentBranch >> studentSem;

    Name name1;
    name1.setName(studentName);
    name1.showName();
    name1.setDetails(studentBranch, studentSem);
    name1.showDetails();
}