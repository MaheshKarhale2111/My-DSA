#include <iostream>
using namespace std;

class base
{

    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1(void)
{
    return data1;
}
int base ::getdata2(void)
{
    return data2;
}
class derived : private base
{

    int data3;

public:
    void process();
    void display();
};

void derived::process(void)
{   setdata();
    data3 = data2 * getdata1();
}

void derived::display()
{
    cout << "value of data 1 is " << getdata1() << endl; // getting data1 through function as data 1 is private
    cout << "value of data 2 is " << data2 << endl;      // data2 is not private hence it is inherited
    cout << "value of data 3 is " << data3 << endl;
}
int main()
{
    derived der;
    // der.setdata(); called setdata in process 
    der.process();
    der.display();

    return 0;
}