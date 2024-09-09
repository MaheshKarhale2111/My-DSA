#include<iostream>
#include<string>
#include<map>
using namespace std;
// map is an associative array

int main(){
    map <string, int> marksmap;
    marksmap["jhjf"]= 95;
    marksmap["mahesh"]= 98;

marksmap.insert({{ "kk", 67}, {"jkl", 37}});
    map<string, int> :: iterator iter;
    for(iter=marksmap.begin();iter != marksmap.end();iter++){
        cout<<(*iter).first<<" ";// *iter give value at begin and (*iter).first gives acces to first and secone members
        // respectively here first is name and sedond is marks
        // it is same like  (*ptr). name or ptr-> name
        cout<< iter->second;// we could even use arrow operator :)
        cout<<endl;
    }
    return 0; 
}