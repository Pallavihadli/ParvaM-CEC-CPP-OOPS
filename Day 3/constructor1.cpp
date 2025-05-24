#include<iostream>
using namespace std;

class Customer{
    public:
    string firstName, lastName;
    int age, rating;

    //Intialized the Constructor
    Customer(){
        firstName = "John";
        lastName = "Doe";
        age = 10;
        rating = 5;
    }

    void showDetails(){
        cout << "Customer Name:" << firstName << " " << lastName << endl;
        cout << "Customer Age:" << age << endl;
    }

    void giveRating(int rate); // declared the member function

    void showRating(){
        cout << "You've given" << rating << " star rating. Thank You!" << endl;
    }
};  
//scope Resolution Operator
void Customer :: giveRating(int rate){ //defined member function
    rating = rate;
}

int main(){
    Customer cust1; // Invoked the constructor to assign the value

    cust1.showDetails();
    cust1.showRating();
    
    Customer cust2;

    cust2.firstName = "pallavi";
    cust2.lastName = "hadli";
    cust2.age = 19;

    int starRating;

    cout << "Give your Rating(0 to 5):";
    cin >> starRating;
    cust2.showDetails();
    cust2.giveRating(starRating);
    cust2.showRating();
}