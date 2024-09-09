// lecture 17

#include <iostream>
using namespace std;
float moneyReceived(int currentmoney, float interest = 1.04)
{                           // Note: All the default arguments are should be at the end 
                             // like (float interest = 1.04,int currentmoney ) produce an error 
    return currentmoney * interest;
}

int main()
{ 
    int money = 100000;
    cout << "Amount received is " << moneyReceived(money);
    cout << " for VIP peeps amount received is " << moneyReceived(money, 1.10);
    return 0;
}