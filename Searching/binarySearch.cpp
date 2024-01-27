#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> vec, int n, int key) {

  int start = 0;
  int end = n - 1;

  //   int mid = (start + end) / 2;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    if (vec[mid] == key) {
      return mid;
    }

    // mid = (start + end) / 2;
    mid = start + (end - start) / 2;

    if (vec[mid] < key) {
      start = mid + 1;
    } else if (vec[mid] > key) {
      end = mid - 1;
    }
  }

  return -1;
}
int main() {

  vector<int> vec{5, 9, 13, 21, 32, 56, 89};

  int key = 13;
  int index = binarySearch(vec, vec.size(), key);

  cout << index << endl;
  return 0;
}