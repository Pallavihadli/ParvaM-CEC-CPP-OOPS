#include<iostream>
using namespace std;

class Calculate{
    public:
       int result;
       
       //Function Overloading-Compile Time Polymorphism
       int sum(int num){ //sum function expecting 1 parameter(int)
           result = num + num;
       }

       int sum(int num1, int num2){ //sum function expecting 2 parameter(int)
           result = num1 + num2;
           return result;
       }

       int sum(float n1, float n2){ //sum function expecting 2 parameter(int)
           float(result) = n1 + n2;
           return result;
       }
};

int main(){
    int number1, number2;
    float decimal1, decimal2;

    cout << "Enter any two integers:";
    cin >> number1 >> number2;

    cout << "Enter any two decimal number:";
    cin >> decimal1 >> decimal2;

    Calculate cal1;
    cout << "Adding the number itself:" << cal1.sum(number1) << endl;
    cout << "Addition of 2 integers:" << cal1.sum(number1, number2) << endl;
    cout << "Addition of 2 decimal:" << cal1.sum(decimal1, decimal2) << endl;
}