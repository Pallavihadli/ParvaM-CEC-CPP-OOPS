#include<iostream>
using namespace std;

class Interest{
    private:
       int principal, term, rate, totalInterest;
       float rateInPercent;

    public:
       int simpleInterest=0;

       Interest(){ // Default Constructor
          principal = 0;
          term = 0;
          rate = 0;
          totalInterest = 0;
          rateInPercent = 0;
          cout << "Total Interest Earned: " << totalInterest << endl;
       }
       
        void setValues(int a, int y){
            principal = a;
            term = y;
        }

         void setValueInteger(int rateOfInteger){
           rate = rateOfInteger;
        }

         void setValueFloat(float rateInFloat){
            rateInPercent = rateInFloat;
        }

         Interest(int p, int t, int r){ // Parameterized Constructor
            setValues(p, t);
            setValueInteger(r);
            simpleInterest = (principal * term * rate)/100;
            cout << "Simple Interest for the following details: " << endl;
            cout << "Principal Amount: " << principal << endl;
            cout << "No. of Years(Term): " << term << endl;
            cout << "Rate of Interest(in Integer): " << rate << endl;
            totalInterest = principal + simpleInterest;
            cout << "Total Interest Earned: " << totalInterest << endl;
       }

       
        Interest(int p, int t, float rateInDecimal){ // Parameterized Constructor
            setValues(p, t);
            setValueFloat(rateInDecimal);
            simpleInterest = (principal * term * rateInDecimal);
            cout << "Simple Interest for the following details: " <<endl;
            cout << "Principal Amount: " << principal << endl;
            cout << "No. of Years(Term): " << term << endl;
            cout << "Rate of Interest(in Float): " << rateInDecimal << endl;
            totalInterest = principal + simpleInterest;
            cout << "Total Interest Earned: " << totalInterest << endl;
        }

        ~Interest(){ // Automatically called to free up the memory uesd by constructor when object has lost the scope
         cout << " Destructor has been called to destroy or free up the memory used by constructor" << endl;
        }

      
 };

    int main(){
        int amount, year, rateOfInterest;
        float interestRate;

        Interest int1;

        cout << "Enter the Principal Amount, No. of Years & Rate of Interest(eg. 5):";
        cin >> amount >> year >> rateOfInterest;

        Interest int2(amount, year, rateOfInterest);
        
        cout << "Enter the Principal Amount, No. of Years & Rate of Interest(eg. 0.05):";
        cin >> amount >> year >> interestRate;

        Interest int3(amount, year, interestRate);
   }