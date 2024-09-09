#include<iostream>
#include<fstream>

//  The useeful classes for working with files inn c++ are :
//  1. fstreambase 
//  2. ifstream -- > derived from fstereambase 
//  3. ofstream -- > derived from fstereambase 


//  In order to work with files in C++ you will have to open it. Primarily there are 2 ways to open a file
//  1. Using the constructor --> Tut_61
//  2. Using the member function open() of the class. --> Tut_62

using namespace std;

int main(){
    string st = " Mahesh is topper";
    string st2 ;
    // opening file using constructor 

    ofstream out ("sample.txt");// write operation //  // this means we are connecting out of stream of name hout with file sample.txt
    out<<st<<endl;
    out<<st;// note --> This will not over right the previous data but print ahead of if



    // // Opening files using constructor and reading it
    // ifstream in ("Sample2.txt");
    // // in >> st2;
    // getline( in , st2);// this will store first linee 
    // cout<< st2;
    // getline( in , st2);/// this will store second line
    // cout<< st2;
    return 0;
}