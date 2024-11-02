#include <iostream>
using namespace std;

int sumArray(const int arr[], int size, int index = 0) {
  
    if (index >= size) {
        return 0;
    }
  
    return arr[index] + sumArray(arr, size, index + 1);
}

int main() {
   
    const int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calculate the sum of the array elements
    int totalSum = sumArray(arr, size);

  
    cout << "The sum of the array elements is: " << totalSum << endl;

    return 0;
}

