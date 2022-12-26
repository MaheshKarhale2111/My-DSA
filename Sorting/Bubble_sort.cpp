#include <bits/stdc++.h>
#include <
using namespace std;

void printArray(int arr[], int n) {
  // here we can't use size of fuction to find length of arrya
  // As we are passing a array pointer and not the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int arr[], int n) {

  bool isSorted = false;
  for (int i = 0; i < n - 1; i++) {
    isSorted = true;

    cout << "Working on pass number" << i + 1 << endl;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        isSorted = false;
      }
    }
    if (isSorted) {
      return; // even after let say 5 passes if it is sorted it will return , no
              // need to go till n-1 passes
    }
  }
}


int main() {
  
  int A[] = {2, 3, 1000, 4};
  int B[] = {1, 2, 5, 6}; // sorted array
  int n = sizeof(A) / sizeof(int);
  printArray(A, n);
  bubbleSort(A, n);
  printArray(A, n);
  return 0;
}
