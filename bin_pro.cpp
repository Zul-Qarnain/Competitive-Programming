#include <iostream>
using namespace std;

// Bubble Sort Function
void bubbleSort(int arr[], int n) {
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no swapping occurred, array is already sorted
        if (!swapped)
            break;
    }
}

// Binary Search Function
int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // If target found at mid
        if (arr[mid] == target)
            return mid;
        
        // If target is greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;
        
        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }
    
    // Element not found
    return -1;
}

// Function to display array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    
    // Get array size from user
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    // Dynamically allocate array
    int* arr = new int[n];
    
    // Get array elements from user
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\nOriginal Array: ";
    displayArray(arr, n);
    
    // Sort the array using bubble sort
    bubbleSort(arr, n);
    
    cout << "Sorted Array: ";
    displayArray(arr, n);
    
    // Search for elements using binary search
    int searchElement;
    cout << "\nEnter element to search: ";
    cin >> searchElement;
    
    int result = binarySearch(arr, n, searchElement);
    
    if (result != -1) {
        cout << "Element " << searchElement << " found at index " << result << endl;
    } else {
        cout << "Element " << searchElement << " not found in the array" << endl;
    }
    
    // Option for multiple searches
    char choice;
    cout << "\nDo you want to search for more elements? (y/n): ";
    cin >> choice;
    
    while (choice == 'y' || choice == 'Y') {
        cout << "Enter element to search: ";
        cin >> searchElement;
        
        result = binarySearch(arr, n, searchElement);
        
        if (result != -1) {
            cout << "Element " << searchElement << " found at index " << result << endl;
        } else {
            cout << "Element " << searchElement << " not found in the array" << endl;
        }
        
        cout << "Search for more elements? (y/n): ";
        cin >> choice;
    }
    
    // Free dynamically allocated memory
    delete[] arr;
    
    return 0;
}
