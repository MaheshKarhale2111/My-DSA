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

void selectionSort(int arr[], int n) {
  // what selection sort basically do is
  //

  int minindex, min;

  for (int i = 0; i < n - 1; i++) {
    min = arr[i];
    minindex = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < min) {
        min = arr[j];
        minindex = j;
      }
    }
    swap(arr[i], arr[minindex]);
    // printArray(arr, n);
  }
}

int main() {
  int A[] = {200, 330, 100, 4};
  int C[] = {20, 4, 6, 3, 7, 8};
  int B[] = {1, 2, 5, 6}; // sorted array
  int n = sizeof(A) / sizeof(int);
  selectionSort(A, n);
  printArray(A, n);

  return 0;
}