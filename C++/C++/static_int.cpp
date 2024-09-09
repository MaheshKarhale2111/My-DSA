#include <iostream>
using namespace std;
// dont use static variables in inline functions
    int product(int a, int b)
    {    static int c=0;
       c=c+1;
        return a * b+c;
    } 

int main(){
    int a=4, b=5;
    cout<<"product is "<<product(a,b)<<endl;
    cout<<"product is "<<product(a,b)<<endl;
    cout<<"product is "<<product(a,b)<<endl;
    cout<<"product is "<<product(a,b)<<endl;
  // what happened ... every time  main function calling product function 
  // value of c is retained and old value is discarded
  // like fist time running value of c = 0+1 =1
  //now second time program starts with c=1 and not c=0
  // as c=0 (old value) discarded
  //In simple word static int line executes only once    
  return 0;
}