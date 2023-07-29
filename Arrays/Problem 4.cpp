// Problem Statement 4:
// Write a program to rotate an array k times.


#include <iostream>
using namespace std;


int main() {
    int n, k, i, j, first;

    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    for (i = 1; i <= k; i++) {
        first = arr[0]; // Store the first element

        // Shift elements one position to the left
        for (j = 1; j < n; j++) {
            arr[j - 1] = arr[j];
        }

        arr[n - 1] = first; // Place the first element at the end
    }

    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
