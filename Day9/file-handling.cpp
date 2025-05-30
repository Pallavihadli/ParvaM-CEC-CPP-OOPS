#include<iostream>
#include<fstream>//Header File for Handling the Fills(Read/Write)
using namespace std;
int main(){
    //fstream haderfile provides 3 classes:
    //fstreambase
    //ifstream(It is derived by fstreambase) - read from the file
    //ofstream(It is derived by fstream) - write to the file
    //writing in the file
    ofstream out("sample.txt");
    string name;
    int age;

    cout << "Enter your name and age:";
    cin >> name >> age;
    out << "Hello " << name << "!" << endl;
    out << "You're " << age << "years old." << endl;
    out.close();

    ifstream read("abd.txt");
    string line;
    while(getline(read, line)){
        cout << line << endl;
    }
    read.close();
}