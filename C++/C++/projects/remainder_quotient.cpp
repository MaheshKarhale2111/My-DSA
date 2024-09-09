//Programme to calulate remainder and quotient by dividing two given numbers
//common mistake here is to declare a/b nd a%b before taking input from user for a and b

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int quotient, remainder;
    cout << "Performing a/b" << endl;
    cout << "Enter value of a" << endl;
    cin >> a;
    cout << "Enter value of b" << endl;
    cin >> b;
    quotient = a / b; 
    remainder = a % b; 

    cout << "Quotient is " << quotient << endl;
    cout << "Remainder is " << remainder << endl;

    return 0;
}