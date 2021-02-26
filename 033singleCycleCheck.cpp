#include<iostream>

#define START_INDEX 0

int getIndex(int arr[], int curr_idx, int n);

bool singleCycleCheck(int arr[], int n) {
  int curr_idx = START_INDEX;
  int visitedCount = 0;
  while(visitedCount < n) {
    if(visitedCount > 0 and curr_idx == 0) {
      return false;
    }
    visitedCount++;
    curr_idx = getIndex(arr, curr_idx, n);
  }
  return curr_idx == 0;
}

int getIndex(int arr[], int curr_idx, int n) {
  int next_idx = 0;
  int jump = arr[curr_idx];
  next_idx = (jump + curr_idx) % n;
  return next_idx >= 0 ? next_idx : next_idx + n;
}

int main() {
  int n = 6;
  // std::cout << "Enter length of array: ";
  // std::cin >> n;
  // int arr[n];
  // std::cout << "Enter array elements: " << std::endl;
  // for(int i = 0; i < n; i++) {
  //   std::cin >> arr[i];
  // }
  int a[n] = {2, 3, 1, -4, -4, 2};
  bool res = singleCycleCheck(a, n);
  if(res) {
    std::cout << "Single cycle!" << std::endl;
  } else {
    std::cout << "Not single cycle!" << std::endl;
    return 0;
  }
}