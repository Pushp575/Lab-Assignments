//Reverse A String--->
#include<iostream>
using namespace std;

int main() {
    char str[100], reversed[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';

    cout << "Reversed string: " << reversed;
    return 0;
}