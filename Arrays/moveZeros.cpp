#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int nonZeroIndex = 0;  // position to place the next non-zero element

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex++] = arr[i];
        }
    }

    // Fill remaining positions with zeros
    while (nonZeroIndex < n) {
        arr[nonZeroIndex++] = 0;
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZeroes(arr, n);

    cout << "After moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
