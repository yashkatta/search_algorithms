#include <iostream>
#include "LinearSearch.hpp"
#include "BinarySearch.hpp"

int main() {
  unsigned int n;
  int x;

  std::cout << "Enter number of elements you want to enter" << std::endl;
  std::cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  std::cout << "Element are ready" << std::endl
            << std::endl
            << "Please Enter the element to search: ";

  std::cin >> x;

  // LinearSearch l;
  // int index = l.LinearSearchOnArray(arr, n, x);

  BinarySearch l;
  int index = l.BinarySearchOnArray(arr, 0, n-1, x);
  if (index > -1) {
    std::cout << "Element found at position: " << index + 1 << std::endl;
  } else {
    std::cout << "Element not found" << std::endl;
  }

  return 0;
}