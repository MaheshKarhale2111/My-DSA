#include<iostream>
using namespace std;
template<class T1= int , class T2 = float>
class unname {
public:
T1 a;
 T2 b;
 unname (T1 x , T2 y){
     a=x; b=y;
 }
 void display (){
     cout<< "The value of a is "<< a<<endl;
     cout<< "The value of b is "<< b<<endl;

 }
};
int main(){
    unname <>h(4,6.4);// here we kept brackets blank as no argumets. ( defalt argumetns)
    h.display();
    unname <float ,char>n(4.6,'b');// here we replaced the deflaut argumetns. just like functions
    n.display();
    return 0;
}