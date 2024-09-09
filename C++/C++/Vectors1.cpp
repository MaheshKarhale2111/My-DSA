#include <bits/stdc++.h>
using namespace std;

void display ( vector<int> *v){
    for (int i = 0; i < (*v).size(); i++)
    {
        cout << (*v)[i]<<endl;
    }
    
}
int main(){
    
   vector <int > vec1;
   vec1.push_back(5);
   vec1.push_back(50);
   vec1.push_back(500);
    vector <int>vec2 ( 6,13);
   vector<int > :: iterator iter = vec1.begin();
   vec1.insert( iter+2,5, 566);
// display ( &vec1);
display ( &vec2);

*max_element(vec.begin(), vec. end()) 
// Return the max element in the vector

*min_element (vec.begin(), vec. end()) 
// Return the min element of the vector
    return 0;
}