#include <iostream>
using namespace std;
class student
{
    string name;

public:
    int age;
    bool gender;
    void setname(string s)
    {
        name = s;
    }

    void print()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "gender :" << gender << endl;
        cout << endl;
    }
};
int main()
{
    // student a;
    // a.name = 'mahesh';
    // a.age= 18;
    // a.gender = 0;
 
    string s;

    student num[3]; // Declaration of 3 students. Same like student a,b,c;
    for (int i = 0; i < 3; i++)
    {
        cout << "Name:";
        cin >> s;
        num[i].setname(s);
        cout << "age:";
        cin >> num[i].age;
        cout << "gender:";
        cin >> num[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        num[i].print();
    }

    return 0;
}