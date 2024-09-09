// this is a programme to print half pyramid of stars 
//Date created --> 16-04-2021

#include<iostream>
using namespace std;

int main(){
    int rows, key;
    cout<<"Enter number of rows : ";
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j; 
        }
        cout<<endl;
        
    }

    cout<<"Press any key";
    cin>>key;
    

    
    return 0;
}




// *
// **
// ***