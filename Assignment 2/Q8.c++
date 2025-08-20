//Distinct Elements -->
#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        int j;
        // check if A[i] already appeared before
        for (j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                break;  // duplicate found, stop checking
            }
        }

        if (j == i) {   // means no duplicate found before
            count++;
        }
    }

    cout << "Total distinct elements: " << count << endl;
    return 0;
}

