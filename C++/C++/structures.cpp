#include <iostream>
using namespace std;

// typedef struct employee
// {
//     int eId;
//     char favchar;
//     float salary;
// } ep;

// int main()
// {
//     ep harry;
//     harry.eId = 1;
//     harry.favchar = 'a';
//     harry.salary = 100000;
//     cout << harry.eId << endl;
//     cout << harry.favchar << endl;
//     cout << harry.salary << endl;

//     return 0;
// }

 struct employee
{
    int eId;
    char favchar;
    float salary;
} ;

int main()
{
    struct employee harry;
    harry.eId = 1;
    harry.favchar = 'a';
    harry.salary = 100000;
    cout << harry.eId << endl;
    cout << harry.favchar << endl;
    cout << harry.salary << endl;

    return 0;
}