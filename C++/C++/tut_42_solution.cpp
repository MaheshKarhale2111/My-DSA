#include<iostream>
#include<cmath>
using namespace std;

class simplecalc{

    protected:
    int a, b;
    public:
        void getdatasimple(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;

            cout<<"Enter the value of b"<<endl;
            cin>>b;

        }
        void perform_simple(){
            cout<<"The value of a+b is :"<< a+b<<endl;
            cout<<"The value of a-b is :"<< a-b<<endl;
            cout<<"The value of a*b is :"<< a*b<<endl;
            cout<<"The value of a/b is :"<< a/b<<endl;

        }

};
class scientificcalc{
 protected:
    int a, b;
    public:
        void getdatascientific(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;

            cout<<"Enter the value of b"<<endl;
            cin>>b;

        }
        void perform_scientific(){
            cout<<"The value of sin(a) is :"<<sin(a)<<endl;
            cout<<"The value of cos(a) is :"<<cos(a)<<endl;
            cout<<"The value of exp(a) is :"<< exp(a)<<endl;
            cout<<"The value of tan(a)is :"<< tan(a)<<endl;

        }
};


class hybridcalc : public simplecalc, public scientificcalc{

};
int main(){
    hybridcalc calc;
    calc.getdatasimple();
    calc.perform_simple();
    calc.getdatascientific();
    calc.perform_scientific();
    return 0;
}