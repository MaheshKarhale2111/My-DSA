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

int partition(int arr[], int low, int high){

  int pivot = arr[low]; 
  int i = low+1, j = high; 

  do {
    while(arr[i] <= pivot){
      i++; 
    }

    while(arr[j] >= pivot){
      j--; 
    }

    if(i < j ) swap(arr[i], arr[j]); 
  } while(i < j);

  swap(arr[low],arr[j]); 
  return j; 
}

void quickSort(int arr[], int low , int high){

  if(low >= high) return; 

  int partitionIndex = partition(arr,low,high); 

  quickSort(arr,low,partitionIndex-1); 
  quickSort(arr,partitionIndex+1,high); 

}

int main(){
  int A[] = {200, 3, 50, 4};
  // int B[] = {1, 2, 5, 6}; // sorted array
  int n = sizeof(A) / sizeof(int);
  printArray(A, n);
  quickSort(A, 0, n - 1);
    printArray(A, n);
}