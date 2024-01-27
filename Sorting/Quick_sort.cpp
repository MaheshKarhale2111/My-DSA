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
  // or jab tak element pivot se chota tai tab tak j ko increment karo
  // aur bada milane pe loop rook jao
  

  do {

    while (arr[i] <= pivot) {
      i++;
    }
    while (arr[j] > pivot) {
      j--;
    }

    if (i < j) {
      swap(arr[i], arr[j]);
    }
  } while (i < j);

  swap(arr[low], arr[j]);
  return j;
}

void quickSort(int arr[], int low, int high) {
  int partitionIndex; // Index of pivot after partition

  if (low < high) {
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

