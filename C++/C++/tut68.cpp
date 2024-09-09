#include <iostream>
using namespace std;
template <class T>
class unname
{
public:
    T data;
    unname(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void unname<T>::display()
{
    cout << data;
}

void func(int a){
    cout<< " I am first func()";
    }
    template< class T>

void func(T a){
    cout<< " I am TEMP func()";
    }
int main()
{
    // unname<int> H(5);
    // cout << H.data;
    func(7);// here there 2 options avalable . one is main function func() and another is template used function but note that exact match fucntion takes highest priority
    return 0;
}