#include <iostream>
using namespace std;
//************************************
// Time complexity of linear search is O(n)
// Time complexity of binary search is O(logn)

int linearsearch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element) //**** be careful . use == sign
        {
            return i;
            // note that here no need to use break function
            // reuturn itself means function linearsearch is terminated
        }
    }
    return -1;
}

int binarysearch(int arr[], int n, int element)
{
    int low = 0, high = n - 1, mid; // Note low, high , mid are indexes
    while (low <= high) // keep searching till low and high converges
    {
        mid = (low + high) / 2;
        if (arr[mid] == element) // be careful as mid is index so use arr and also use == sign
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
            // if mid element is lower than element then we need to shift mid to the higher value for that low = mid +1 also note that we are using mid +1 as we already checked element at mid by first if condition
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    //     int arr[] = {1, 2, 60, 59, 5, 4, 6, 9, 4, 5456, 987, 55};
    //     int size = sizeof(arr) / sizeof(int); // this will count total size of array

    int arr[] = {1, 2, 6, 59, 65, 74, 86, 99, 114};
    int size = sizeof(arr) / sizeof(int); // this will count total size of array
    int element = 2;
    // int found_index = linearsearch(arr, size, element);
    int found_index = binarysearch(arr, size, element);
    cout << "The element found at " << found_index << endl;
    return 0;
}