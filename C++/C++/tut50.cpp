#include<iostream>
using namespace std;

int main(){
    int* p= new int (40);
    int *arr= new int[34];// compiler god please allocate memory to store 34 int
    // and from that 34 blocks address of first block will be stored in arr and other block address 
    // can be found by incrementation
   
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
// delete[] arr;
    //dynamic continuous memory allocation here we use memory size as int
// see video most imp
      cout<<arr[1]<<endl;
      cout<<*arr<<endl;
      cout<<*(arr+1)<<endl;
      cout<<*(arr+2)<<endl;
                                                                                                                
      
        return 0;
}