#include <iostream>
using namespace std;

int main() {
    int a[8] = {9, 4, 1, 7, 3, 6, 2, 5};
    int n = 8;

    for (int i = 0; i < n / 2; i++) {
        int minIndex = i;
        int maxIndex = n - i - 1;

        // Traverse the unsorted part
        for (int j = i; j <= n - i - 1; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
            if (a[j] > a[maxIndex])
                maxIndex = j;
        }

        // Swap the minimum element with the first unsorted element
        swap(a[i], a[minIndex]);

        // If the max element was moved when swapping the min, fix its index
        if (maxIndex == i)
            maxIndex = minIndex;

        // Swap the maximum element with the last unsorted element
        swap(a[n - i - 1], a[maxIndex]);
    }

    cout << "Sorted array is:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
