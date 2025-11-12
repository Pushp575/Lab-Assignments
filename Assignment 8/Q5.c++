#include <iostream>
using namespace std;

// Function to heapify a subtree rooted at index i
void heapify(int arr[], int n, int i) {
    int largest = i;       // root index
    int left = 2 * i + 1;  // left child index
    int right = 2 * i + 2; // right child index

    // Compare left child
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Compare right child
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root not largest
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Heap Sort function
void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements from heap one by one
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call heapify on reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {12, 10,13, 5, 8,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    heapSort(arr, n);

    cout << "Sorted array (Increasing Order): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
