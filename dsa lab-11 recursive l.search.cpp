#include <iostream>
using namespace std;

int linearSearch(const int arr[], int size, int target, int index = 0) {
   //If the index reaches the size of the array, 
    if (index >= size) {
        return -1;
    }

    // Check if the current element matches the target
    if (arr[index] == target) {
        return index; 
    }

    // Recursive call to search in the next index
    return linearSearch(arr, size, target, index + 1);
}

int main() {
    
    const int arr[] = {4, 2, 7, 1, 3, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    
    int result = linearSearch(arr, size, target);

   
    if (result != -1) {
      cout << "Element found at index: " << result << endl;
    } else {
       cout << "Element not found in the array." <<endl;
    }

    return 0;
}
