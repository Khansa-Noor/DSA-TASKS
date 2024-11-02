#include <iostream>
using namespace std;

int binarySearch(const int arr[], int left, int right, int target) {
  
    if (left > right) {
        return -1;
    }

    // Calculate the middle index
    int mid = left + (right - left) / 2;

    // Check if the target is at the middle
    if (arr[mid] == target) {
        return mid; 
    }

    // If the target is smaller than the middle element, search in the left half
    if (target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    }

    // If the target is larger than the middle element, search in the right half
    return binarySearch(arr, mid + 1, right, target);
}

int main() {
    
    const int arr[] = {2, 3, 4, 10, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

  
    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
      cout << "Element not found in the array." << endl;
    }

    return 0;
}
