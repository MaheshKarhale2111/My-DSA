#include<iostream>
using namespace std;
// TUT 24
class employee{
        int id;
        /*int count=0; note that if you use this int count=0 . this will not increment for each object
        here objects are mahesh, harry, rohan. cause this count is different for different for all objects.
        like when we want to print number of employess.
        solution is to make universal count shared by all objects in class. that is static int count*/

         static int count;//which is by defaluts declard as 0
                            // if you want to change defalut value we can change it in count which is written 
                             // outside of class i.e int employee:: count=1000;
        public:
        void setdata(void){ 
            cout<<"Ehter the id"<<endl;
            cin>>id;
            count++;        }

    void getdata(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }

    };

    int employee:: count;

int main(){

    employee harry, mahesh, rohan;

    harry.setdata();
    harry.getdata();

    mahesh.setdata();
    mahesh.getdata();

    rohan.setdata();
    rohan.getdata();
    
    return 0;
}