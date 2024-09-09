#include<iostream>
#include<fstream>
using namespace std;
// opeing files using member function open()
int main(){
    // ofstream out;
    // out.open("sample.txt");// opeing a file
    // out<<"This is me mahesh"<<endl; // writing data in file
    // out.close();
    // out<< "ha ha changed";// note since file is closed this command will not work 



    ifstream in ;
    string st, st2;
    in.open("sample.txt");
    // in>> st>> st2;
    while(in.eof() == 0)// eof means end of files. when eof = 1 that means file is ended 
                        // eof == 0 means run while loop till eof = 1 that means till end of loop is achived
    {
        getline(in, st);
        cout<< st<< endl;
    }                    
    cout<< st;
    cout<< st2;
    in.close();          
    return 0;
}