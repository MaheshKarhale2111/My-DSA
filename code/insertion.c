#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Display is called ");
}
void insertion(int arr[], int size, int element, int index, int tsize)
{

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
        
    }
    arr[index]= element;
    size += 1;
    
//    display(arr,size);
}
int main()
{
    int arr[100] = {1, 2, 3, 4};
    int element = 45, size = 4;
    int tsize = 100, index = 2;
    insertion(arr, size, element, index, tsize);
    display(arr, size+1);
    return 0;
}
