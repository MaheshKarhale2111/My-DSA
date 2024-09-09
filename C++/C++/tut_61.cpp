#include<iostream>
#include<fstream>
using namespace std;
// ********** Refering to tut 60 we saw two methods to open files . this is first method
// that is opening with constructor
int main(){
    ofstream hout ("sample.txt"); // this means we are connecting out of stream of name hout with file sample.txt
    string name;
    cout<< "Enter your name";

     cin >>name;
     hout<< "My name is "<<name;
     hout.close(); // stopeed linking

string content;
     ifstream hin("sample.txt");
     getline(hin,content);
     cout<< content;
     hin.close();
    return 0;
}