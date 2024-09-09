#include <iostream>
using namespace std;
// ************ ONE OF THE BEST PROGRAM TO UNDER STAND THIS POINTER. WATCH NARESH I TECHNOLOGY VID BEFORE
template <class T>///  T is custom data type
 // everywhere where is T replace it by whatever data type we want to use
class vector
{
    int size;

public:
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + (this->arr[i]) * (v.arr[i]);
            // cout << d << endl;
        }

        // cout<<this->arr[0]<<endl;
        // cout<<v.arr[0]<<endl;
        // cout<<this->arr[1]<<endl;
        // cout<<v.arr[1]<<endl;
        return d;
    }
};
int main()
{
//     // note : vector (size) here size is like rnumber of axes
//     vector v1(2);
//     v1.arr[0] = 3;
//     v1.arr[1] = 6;

//     vector v2(2);
//     v2.arr[0] = 1;
//     v2.arr[1] = 6;
    
//    cout<< v1.dotproduct(v2);


    vector <float> v1(2);
    v1.arr[0] = 3.2;
    v1.arr[1] = 6;

    vector <float> v2(2);   
    v2.arr[0] = 1;
    v2.arr[1] = 6.9;
    
   cout<< v1.dotproduct(v2);

    return 0;
}