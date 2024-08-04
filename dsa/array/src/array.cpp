#include <iostream>

// TODO: impl dynamic array
// TODO: impl mulidimensional array

void static_array() {
  const unsigned size = 10;
  int arr[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (int i = 0; i < size; i++) {
    if (i == (size - 1)) {
      std::cout << i << std::endl;
    } else {
      std::cout << i << " ";
    }
  }
}

void dynamic_array() {
  const unsigned size = 10;
  std::allocator<int> alloc_one;

  int *arr = alloc_one.allocate(size * sizeof(int));

  for (int i = 0; i < size; i++) {
    int iterator = 0;
    arr[i] = i + iterator;
    std::cout << arr[i] << " ";
    ++iterator;
  }

  alloc_one.deallocate(arr, size * sizeof(int));
}

int main() {
  std::cout << "static_array" << std::endl;
  static_array();
  return 0;
}
