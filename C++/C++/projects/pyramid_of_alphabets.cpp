#include<iostream>
using namespace std;

int main(){
    char input, alphabet='A';

    // int p='A'+1;
    // int q='A';
    // // alphabet++;
    // cout<<q;
    // cout<<p;

    cout<<"Enter the Capital alphabet you want in last row of pyramid : ";
    cin>>input;

    for (int i = 1; i <= input-'A'+1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<alphabet;
        }
        cout<<endl;
        alphabet++;
    }
     
                // **********OR***********
    // for (int i = 'A'; i <= input; i++)
    // {
    //     for (int j = 'A'; j <= i; j++)
    //     {
    //         cout<<alphabet;
    //     }
    //     cout<<endl;
    //     alphabet++;
    // }
    


    return 0;
}