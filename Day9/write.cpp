#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //We have defined the write object from ofstream class
    ofstream write("a.txt"); // We have defined the write object from the ofstream class
    write << "Good Morning Students, " << endl;
    write << "We shall work on the file handling! " << endl;
    write.close(); // Closing the file after writing

    ofstream fout("b.txt");
    fout << "Written in the file using another user-defined object: fout";
    fout.close();

    //We can use any word to make an object, Ex:write, out, fout, fwrite, w

    ofstream out("a.txt");
    out.put('G'); //  adding single characterto the file using the put method
    out << "ood Morning!";
    out.close();
}