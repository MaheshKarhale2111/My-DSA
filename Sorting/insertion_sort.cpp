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

void insertionSort(int arr[], int n) {
  int key, j;
  int counter = 0;
  for (int i = 1; i < n; i++) {
    key = arr[i];
    //     for (int j = i - 1; j >= 0; j--) {
    //       if (key < arr[j]) {
    //         int temp = arr[j + 1];
    //         arr[j + 1] = arr[j];
    //         arr[j] = temp;
    //         counter = counter + 1;
    //       }
    //     }

    j = i - 1;
    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      j--;
      
    }
    arr[j + 1] = key;
  }
}
int main() {
  int A[] = {200, 330, 100, 4};
  int C[] = {2, 4, 6, 3, 7, 8};
  int B[] = {1, 2, 5, 6}; // sorted array
  int n = sizeof(C) / sizeof(int);
  insertionSort(C, n);
  printArray(C, n);

  return 0;
}