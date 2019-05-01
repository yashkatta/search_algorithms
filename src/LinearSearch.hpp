#pragma once

class LinearSearch {
 public:
  LinearSearch() {}
  ~LinearSearch() {}

  template <typename T>
  int LinearSearchOnArray(T arr[], unsigned int size, T x);
};

template <typename T>
int inline LinearSearch::LinearSearchOnArray(T arr[], unsigned int size, T x) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == x) return i;
  }
  return -1;
}