#include<iostream>
using namespace std;

class Area{
    private:
       int length, breadth, height;
       float radius;

    public:
       int result;

       Area(){ // Default Constructor (No Parameters)
         length=0;
         breadth=0;
         height=0;
         radius=0;
         result=0;
         cout << "Area: " << result << endl;
       }

       Area(int a){ // Parameterized Constructor(1 Parameter - Integer)
         length = a;
         result = length * length;
         cout << "Area of Square: " << result << endl; 
       }

       Area(int c, int d){ // Parameterized Constructor(2 Parameter)
         length = c;
         breadth = d;
         result = length * breadth;
         cout << "Area of Rectangle: " << result << endl;
       }

       Area(float r){ // Parameterized Constructor(1 Parameter - float)
         radius = r;
         result = 2 * 3.142 * radius;
         cout << "Area of Circle: " << result << endl;
       }
        Area(int l, int b, int h){  // Paramater Constructor(3 Parameters)
         length = l;
         breadth = b;
         height = h;
         result = length * breadth * height;
         cout << "Area of Cube: " << result << endl;
       }
};

int main(){
    Area a1;

    int len, wid, hgt;
    float rad;

    cout << " Enter the length of the square: ";
    cin >> len;

    Area a2(len); // Finding Area of Square

    cout << " Enter the length & breadth of the rectangle: ";
    cin >> len >> wid;

    Area a3(len, wid);

    cout << " Enter the radius of the circle: ";
    cin >> rad;

    Area a4(rad);

    cout << " Enter the length, breadth & height of the cube: ";
    cin >> len >> wid >> hgt;

    Area a5(len, wid, hgt);
}