#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
  // here we can't use size of fuction to find length of arrya
  // As we are passing a array pointer and not the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[low]; // assuming first element as pivot
  int i = low + 1;
  int j = high;

  // Jab tak pivot se bada element nahi milata , i ko increment karo
  // or jab tak element pivot se chota tai tab tak j ko decrement karo
  // aur bada milane pe loop rook jao

  // then swap i and j coz hume chota element pehle chahiye and bada badme 
  

  do {

    while (arr[i] <= pivot && i < j) {
      i++;
    }
    // note that if arr[i] == pivot, that condition is handles in first while loop there there is <= symbol 
    // for other one , simple > symbol 
    while (arr[j] > pivot && i < j) {
      j--;
    }

    if (i < j) {// imp . Swap only if i < j 
      swap(arr[i], arr[j]);
    }
  } while (i < j);

  swap(arr[low], arr[j]); // swap with pivot so element before pivot are less and after pivot are greater
  return j;
}

void quickSort(int arr[], int low, int high) {
  int partitionIndex; // Index of pivot after partition

  if (low < high) {
    // low less than high means it has more than one element. One element array is sorted anyway. 
    partitionIndex = partition(arr, low, high);
    quickSort(arr, low, partitionIndex - 1); // sort left subarray
    quickSort(arr, partitionIndex + 1, high);  // sort right  subarray
  }
}

int main() {

  int A[] = {20, 3, 50, 4};
  // int B[] = {1, 2, 5, 6}; // sorted array
  int n = sizeof(A) / sizeof(int);
  printArray(A, n);
  quickSort(A, 0, n - 1);
    printArray(A, n);
  return 0;
}

