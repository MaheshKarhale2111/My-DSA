#include <iostream>
#include <vector>
    

using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)

    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
// ways to create a vector 
    vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,113); //6-element vector of 3s
    display(vec4);
    // int element;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Enter an elemtnt to add to this vector ";
    //      cin >> element;
    //     vec1.push_back(element);// push back add element at the end
    // }
    // // vec1.pop_back();// 1 element bahar nikal liya
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+2,2, 566);
    // display(vec1);

vector<int> :: iterator iter = vec1.begin();

    return 0;
}