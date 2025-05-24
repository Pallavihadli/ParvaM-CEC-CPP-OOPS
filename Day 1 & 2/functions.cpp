#include<iostream>
using namespace std;

void sayHello(){    // function declaration
    cout << "Hello!" <<end!;  // function definition
}

int sayHi(string name){  // function with parameters
    cout << "Hi, " << name <<end1;

}
int sayHi(string fname,string lname,int age){  // function with parameters
    cout << "Hi, " << fname << "  " << lname << ",Age: " << age << end1;

}

int main(){
    string firstName, lastName, friendName;
    int Age;
    cout << "Enter your first name :";
    cin >> firstName;
    cout << "Enter your last name :";
    cin >> lastName;
    cout << "Enter your age :";
    cin >> Age;
    cout << "Enter your friend's name :";
    cin >> friendName;
    sayHello();  // function call with arguments
    sayHi(firstName);
    sayHi(friendName);
    greet(firstName, lastName, Age);
}