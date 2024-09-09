#include<iostream>
using namespace std;
//*********** TUT 50 NOTES ARE MUST BEFORE THIS**********
class shop{
    int id;
    float price;
    public:
    void setdata ( int a, float b){
            id =a;
            price =b;

    }
    void getdata (){
        cout<<"Code adresss of itme is "<<id<<endl;
        cout<<"Price of itme is "<<price<<endl;
    }            
};
int main(){
    // float size=2;
    // float * ptr= &size;
    // float **pp= &ptr;// note here it is pointer to  pointer concept where pp is storing address of one pointer
    // cout<<ptr<<endl;
    // cout<<*(ptr)<<endl;
    // cout<<*pp<<endl;
    
///////***********this is imp*************
    // int a ;
    // int *ptr=&a;
    // int *ptrtemp= ptr;// and here it is storing value if a pointer 
    //  value of type "int *" cannot be used to initialize an entity of type "int"
    // cout<<ptr<<endl;
    // cout<<ptrtemp<<endl;

    int size =3,p;
    float q;
    shop *ptr = new shop[size];
    // this will allocate as much size required for 3 shop data type

    shop *ptrtemp= ptr;
    // this will store ptr and not ptr address. NOte= data type must be  shop
    // int ptrtemp=ptr;67
for (int i = 0; i < size; i++)
{
    cout<<"Enter Id and price of item "<<i+1<<endl;
    cin>>p>>q;
    // (*ptr).setdata(p,q);
 ptr-> setdata(p,q);// use of arrow operator for same command as above
 ptr++;
}

for (int i = 0; i < size; i++)
{
    cout<<"Item number : "<<i+1<<endl;
    ptrtemp->getdata();
    ptrtemp++;

}
    return 0;
}