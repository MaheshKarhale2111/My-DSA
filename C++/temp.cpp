#include <bits/stdc++.h>
using namespace std;

#define f(i,n) for (int i = 0; i < n; i++)
// #define int long long
#define print(n) cout << n << endl;
#define print2(a,b) cout << a <<" "<<b<< endl;
#define printv(v)  for (auto i : v)  {cout << i << " ";} cout << endl;
#define vall(v) v.begin(), v.end()
#define printmap(m) for(auto i: m) { cout <<m.first <<" "<<m.second<< endl;}
#define yes {cout<<"YES"<<endl; return;}
#define no {cout<<"NO"<<endl; return ;}


 
class comp{
    int a, b; 
    static int count; 
    public: 

    // complex(int a, int b){
    //     this->a = a; 
    //     this->b = b; 
    // }

    comp(int, int); 
    void printkaro(); 


};

int comp :: count; 

comp :: comp(int x, int y){
    a= x; 
    b = y; 
    print("Hello world"); 
}

void comp :: printkaro(){
    print2(a,b); 
}


int main(){
    
    comp a(5,6); 
    a.printkaro(); 
    return 0;
}