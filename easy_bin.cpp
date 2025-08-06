#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    // Input number of elements
    cout << "How many numbers (max 100)? ";
    cin >> n;

    // Input elements
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap smallest with arr[i]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Show sorted array
    cout << "Sorted numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Binary Search
    int x;
    cout << "Enter number to search: ";
    cin >> x;

    int low = 0, high = n - 1, found = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            found = mid;
            break;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found != -1)
        cout << x << " found at position " << found << endl;
    else
        cout << x << " not found\n";

    return 0;
}
