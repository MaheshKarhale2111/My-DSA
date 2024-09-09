#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float rate;
    float returnvalue;

    public:
     bankdeposit(){};// very important curly braces cause we are not defining it further
     bankdeposit(int p, int y, float r);
     bankdeposit(int p, int y, int r); 
     void show();

};

bankdeposit:: bankdeposit(int p, int y, float r){ // taking input in decinal form
    principal=p;
    years =y;
    rate=r;
    returnvalue=principal;

    for (int i = 1; i <=y; i++)
    {
        returnvalue = returnvalue + returnvalue*r;
    }
    
}
bankdeposit:: bankdeposit(int p, int y, int r){// taking rate input in percentage form like 30%
    principal=p;
    years =y;
    rate=float(r)/100;        // best example of typecasting
    returnvalue=principal;

    for (int i = 1; i <=y; i++)
    {
        returnvalue = returnvalue + returnvalue*rate;
    }
    
}

void bankdeposit :: show(){
    cout<<endl<<"the principal value was "<<principal<< endl
        <<"return value after "<< years<<" years"
        << " is "<< returnvalue<< endl;
    
} 
int main(){
    bankdeposit bd1, bd2,bd3; // very imp. Compiler ko ek consructor eisa bhi chahiye jo kuch na kare.
                             // cause every time definging object means it calls constructor
                            // if dont make any black constructor and if we just make bd3
                            // then compiler will get confused which constructor should be called cause all other
                            // constructors are taking input values
                            // just comment out bankdeposit(){ } and see
    int p,y;
    float r;
    int R;

    cout<< "Enter the value of p y and r"<< endl;
    cin >>p>>y>>r;

    bd1= bankdeposit(p,y,r);
    bd1.show();

cout<< "Enter the value of p y and r"<< endl;
    cin >>p>>y>>R;

    bd2= bankdeposit(p,y,R);
    bd2.show();




    
    return 0;
}