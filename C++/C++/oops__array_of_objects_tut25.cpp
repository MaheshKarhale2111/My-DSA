#include<iostream>
using namespace std;
class employee{
    int id ;
    int salary;
    public:
    void setid(void){
        cout<<"Enter the id of employee"<<endl;
        cin>>id;

    }
    
    void getid(void){
        salary=122;
        cout<<"The id of this employee is "<<id<<endl;
    }
};
int main(){
    employee harry, mahesh, rohan;
    // harry.setid();
    // harry.getid();  // This will be hectic if number of employees is high
    // so we store all employees in one array
    employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();

    }
    
    return 0;
}