#include<iostream>
using namespace std;

class Wish{
    private:
          string name;
          int age;

    public:
          Wish(){ // Default constructor
            name = "Unknown";
            age = 0;
          }

          Wish(string n, int a); // Parameterized Constructor

          void birthdayWishes();
};

// Defining the rules of Parameterized Constructor outside the Class using scope Resolution operator
Wish :: Wish(string n, int a){ //Syntax: className :: constructor(parameters) (No Return type is requried)
    name = n;
    age = a;
}

//Defining the member out of the Class using Scope Resolution Operator
void Wish :: birthdayWishes(){ //Syntax: return_type className :: member_function(parameters) (Return type is must)
            cout << "Happy Birthday " << name << " ! Now you're " << age << " years old." << endl;
}

int main(){
    string personName;
    int personAge;

    Wish person1; // Object Declared
    person1.birthdayWishes();

    cout << "Enter your name:";
    cin >> personName;
    cout << "Enter your age:";
    cin >> personAge;

    Wish person2(personName, personAge);
    person2.birthdayWishes();
}