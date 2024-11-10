#include<iostream>
using namespace std;
class c2;// forward declaration


class c1{
    int val;

friend void exchange (c1 &, c2 &);
    public:
    
        void indata (int a){
            val =a;
        }
        void print(void){
            cout<<val<<endl;
            
        }
    
};
class c2{
    int val2;
    friend void exchange (c1 &, c2 &);
    public:
    
        void indata (int a){
            val2 =a;
        }
        void print(void){
            cout<<val2<<endl;

        }
    
};

void exchange ( c1 &x,c2 &y){// declaring by call by reference
int tmp = x.val;
   x.val= y.val2;
   y.val2= tmp;
}



int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1,oc2);

    cout<<"The value of c1 after exchanging becomes ";
    oc1.print();

    cout<<"The value of c2 after exchanging becomes ";
    oc2.print();
    
    return 0;
}