#include <iostream>
using namespace std;

// float unname ( int a, int b){
//     float avg =(a+b)/2.0;
//     return avg;
// }



template <class T1, class T2>
float average(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
template < class T>
void swapp ( T &a , T &b){
    T temp = a;
    a= b;
    b= temp;
}
int main()
{
    int a;
    // a = average(5, 2.5);
    // printf("The average is %.2f", a);
    a=3; int b= 3.5;
    swapp(&a,&b);
cout <<a<< b;
    return 0;
}