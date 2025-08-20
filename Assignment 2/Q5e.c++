//Symmetric matrix -->
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int total = n * (n + 1) / 2;
    int a[1000];

    cout << "Enter " << total << " elements (lower triangle row-wise): ";
    for (int i = 0; i < total; i++) cin >> a[i];

    int p = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << a[p++] << " ";
            else cout << a[j * (j + 1) / 2 + i] << " "; 
        }
        cout << "\n";
    }
    return 0;
}

