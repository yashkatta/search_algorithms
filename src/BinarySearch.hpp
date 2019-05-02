#pragma once

class BinarySearch {
 public:
  BinarySearch(){}
  ~BinarySearch(){}

  template <typename T>
  int BinarySearchOnArray(T arr[], int l, int r, T x);
};

template <typename T>
int BinarySearch::BinarySearchOnArray(T arr[], int l, int r, T x) {
  int m;
  while (l <= r) {
    m = l + (r - l) / 2;
    if (arr[m] == x) return m;
    if (arr[m] < x)
      l = m + l;
    else
      r = m - l;
  }

  return -1;
}