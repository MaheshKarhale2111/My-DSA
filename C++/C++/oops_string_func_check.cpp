#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    

    cin>> s;
    
    cout<<s.at(1); 
    cout<<s.at(2);       
    cout<<s.at(3);  /*note that st function is string function which will give what is at that point
say at(1) they it will print what number charcter at position 2 of string 
coz the number reading of cpp starts from 0*/

    return 0;
}