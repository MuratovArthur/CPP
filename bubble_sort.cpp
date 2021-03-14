#include <iostream>
using namespace std;

int* bubbleSort(int array[], int length) {

  // loop for walking throught the array
  for (int step = 0; step < length - 1; step++) {

    //loop for comparison
    for (int i = 0; i < length - step - 1; i++) {

      if (array[i] > array[i + 1]) {

        // swap if next item is greater than previous
        int x = array[i];
        array[i] = array[i + 1];
        array[i + 1] = x;
      }
    }
  }
  return array;
}

int main() {
  int array[] = {6, 7, 2, 1};
  int length = sizeof(array) / sizeof(array[0]);
  bubbleSort(array, length);

  cout << "Sorted array:" << "\n";
    
    // loop through the elements of the array
    for (int i = 0; i < length; i++) {
        cout << "[" << i << "]: " << array[i] << "\n";
    }
}
