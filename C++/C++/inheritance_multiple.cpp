#include <iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
// class derived : visibility-mode base1, visibility-mode base2{

// };

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2{
    public:
    void show(){
        cout<< "the value of base1 is "<<base1int<< endl;
        cout<< "the value of base2 is "<<base2int<< endl;
        cout<< "the sum is "<<base1int+ base2int<< endl;
    }
};

/*The inherited derived class will look something like this:

base1int: protected
base2int: protected

set_base1int: public
set_base2int: public 



*/
int main()
{
    derived harry;
    harry.set_base1int(5);
    harry.set_base2int(25);
    harry.show();

    return 0;
}