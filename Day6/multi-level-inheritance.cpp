#include<iostream>
using namespace std;

class Animal{  // Base Class - Level 0
    string name;
    public:
        void setName(string animalName){
            name = animalName;
        }

        void showAnimal(){
            cout << "Name of the Animal: " << name << endl;
        }
       
};

// Animal -> Carnivore (Symbolic Representation)
//Animal class is deriving from carnivore class
//Carnivore class is deried by/from animal class
class Carnivore : public Animal{  // Derived Class/ Base Class - Level 1
   string vegetation; //private member
   public:
        void setFood(string food){
            vegetation = food;
        }

        void showFood(){  //private member
            cout << "Type of Animal: " << vegetation << endl;
        }

   };


// Mammal -> Carnivore (Symbolic Representation)
class Mammal : public Carnivore{  // Derived Class - Level 2
    string habitat;
    public:
       void setHabitat(string place){
          habitat = place;
       }
       void showHabitat(){
          cout << "Living Place: " << habitat << endl;
       }
};

int main(){
    string animal_name, food_type, place_of_living;

    cout << "Enter the name of the Animal & its food type & place of living: ";
    cin >> animal_name >> food_type >> place_of_living;

    Animal a1;
    a1.setName(animal_name);

    Carnivore c1;
    c1.setName(animal_name);
    c1.setFood(food_type);

    Mammal m1;
    m1.setName(animal_name);
    m1.setFood(food_type);
    m1.setHabitat(place_of_living);

    m1.showAnimal();
    m1.showFood();
    m1.showHabitat();

}