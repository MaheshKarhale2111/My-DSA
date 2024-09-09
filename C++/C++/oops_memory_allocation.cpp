#include <iostream>
using namespace std;

class shop
{
    int itemid[100];// declaring array to store multiple values in single varible
    int itemprice[100];
    int counter;// this is is increament counter 

public:
    void inticounter(void)
    {
        counter = 1;// declaring counter as 1 that means we will be counting in array start from 1
    }
    void setdata(void);// declaring function prototype
    void display(void);
};

void shop ::setdata(void)
{
    cout << "Enter the item number of item " << counter << endl;
    cin >> itemid[counter];// taking input from user for defined counter
    

    cout << "Enter price of item " << counter << endl;
    cin >> itemprice[counter];
    counter++; // increaminting counter each time this fuction is called
}

void shop ::display(void)
    
{    for (int i = 1; i < counter; i++)// displaying the price
{
     cout << "The price of item no " << itemid[i] << " is " << itemprice[i]<<endl;
}

   
}

int main()


{    int item_num;
cout<<"Enter total number of Item number";
cin>>item_num;

    
      // Writing driver programme
       shop dukkan; // making of object
       dukkan.inticounter();
       for (int i = 1; i <=item_num; i++)
       {
           dukkan.setdata();
           
       }
       
       
      
       dukkan.display();


    return 0;
}