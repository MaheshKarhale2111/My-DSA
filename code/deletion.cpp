#include<iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Display is called ");
}
void deletion(int arr[], int size, int index)
{

    for (int i = index; i < size-1; i++)
    {
       
        arr[i]=arr[i+1];
    }
   

}
int main(){
    
    int arr[100] = {1, 2, 3, 4};
    int  size = 4;
    int  index = 2;
    deletion(arr, size, index);
    display(arr, size-1);
    return 0;
}