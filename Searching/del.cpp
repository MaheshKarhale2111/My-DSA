#include <bits/stdc++.h>
using namespace std;

bool isPossible(int A[], int N, int M, int mid) {
  int students = 1;
  int sumtemp = 0;

  for (int i = 0; i < N; i++) {
    if (sumtemp + A[i] <= mid) {
      sumtemp = sumtemp + A[i];
    } else {
      sumtemp = 0;
      students++;
      if (students > M || A[i] > mid) {
        return false;
      }
      if (sumtemp + A[i] < mid) {
        sumtemp = sumtemp + A[i];
      }
    }
  }

    return true;

}

int findPages(int A[], int N, int M) {
  // our solution from will be from min element to sum of all array
  if(N<M){
    return -1;
  }
  int start = A[0];
  int sum = accumulate(A, A + N, 0);
  int end = sum;
  int mid;
  int ans = -1;

  while (start <= end) {
    mid = start + (end - start) / 2;
      cout<<start<<" " << mid<<" "<<end<<endl;
      ans = mid;

    if (isPossible(A, N, M, mid)) {
      // we found a solution but trace more to find min solutoin
      

      end = mid - 1;
    } else {
      // this means if m students can't even make amount equal to mid then no
      // point in checking value less than 50
      start = mid + 1;
    }
  }

  return ans;
}
int main() { 
    
    int A[] = {12,34,67,90}; 
    int N = 4 ; 
    int M = 5 ; 

    cout<< findPages(A,N,M);
    return 0; }