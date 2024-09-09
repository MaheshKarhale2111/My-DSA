#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n) {
  // here we can't use size fuction to find length of arrya
  // As we are passing a array pointer and not the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void bubbleSort_recursive(int arr[], int n) {
  bool isSorted = false;
  if (n == 1) {
    return; // run the recursive function till unsorted number of elemetns is
            // array become = 1
  }

  isSorted = true;
  cout << "Working on pass number" << n << endl;
  for (int j = 0; j < n - 1; j++) {
    if (arr[j] > arr[j + 1]) {
      int temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = temp;
      isSorted = false;
    }
  }
  if (isSorted) {
    return;
  }
  // this for loop will throw largest number at the end of array thus
  // now we have to sort remaining (n-1) elements only

  bubbleSort_recursive(arr, n - 1);
}

int main() {
  int A[] = {100, 10, 1000, 4, 25, 100000};
  int B[] = {1, 2, 5, 6}; // sorted array
  int n = sizeof(B) / sizeof(int);
  printArray(B, n);
  bubbleSort_recursive(B, n);
  printArray(B, n);
  return 0;
}