#include<iostream>
using namespace std;

class Car{
    //Data
    public:
      string brand,model,variant,fuel_type;
      int year;
      float price;

     //Member Function
    void start(){
        cout << model << "started!" << endl;
    }

    void park(){
        cout << model << "parked!" << endl;
    }

    
    void stop(){
        cout << model << "stopped!" << endl;
    }

    void display(){
        cout << "Brand:" << brand << endl;
        cout << "Model:" <<model << endl;
        cout << "variant:" << variant << endl;
        cout << "Fuel_type:" << fuel_type << endl;
        cout << "Launch year:" << year << endl;
        cout << "price:" << price << endl;
    }

};

int main(){
    Car c1; // object created for the class Car
    c1.brand="Toyota";
    c1.model="Innova";
    c1.variant="6 seater";
    c1.fuel_type="Diesel";
    c1.year=2024;
    c1.price=15,00,000;
    c1.start();
    c1.park();
    c1.display();
}