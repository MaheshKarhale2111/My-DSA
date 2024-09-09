#include<iostream>
using namespace std;
int count=0; // global variable
class num {
    public:
    num(){
        count++;
        cout<<"This is the time contructor is called for object number"<<count<<endl;

    }

    ~num(){// this is how dstructor is made
           cout<<"This is the time when my distructore is called for object number"<<count<<endl;
           count--;
    }
};


int main(){
    cout<<"we are inside out main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {// this is block
        cout<<"Entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }

    cout<<"Back to main"<<endl;
    return 0;
}