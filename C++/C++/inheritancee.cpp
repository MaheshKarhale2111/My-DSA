#include <iostream>
using namespace std;
// based class
class employee
{
public:
    int id;
    float salary;
    employee(int eid)
    {
        id = eid;
        salary = 34;
    }

    employee(){};
};
// derived class syntax
// class derived-class name : {{visibility-mode}} {{base-class-name}}{
// default
// }
//1.public visibility mode: public members of the base class becomes public members of the derived class
//2. private visibility mode: public members of the base class becomes private members of the derived class
//3. private members are never inheritated
// creating a Programmer class derived form employee base class

class programmmer :employee {
public:
    programmmer(int eid)
    {
        id = eid;
        
    }

    int language = 9;
};

int main()
{
    employee mahesh(1), harry(2);
    cout << harry.salary << endl;
    cout << mahesh.salary << endl;

    programmmer skillf(3);
    
    cout<<skillf.language;
 
    return 0;
}