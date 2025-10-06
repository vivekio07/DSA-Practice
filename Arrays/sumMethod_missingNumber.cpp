#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    // Expected sum of 1 to n
    int total = n * (n + 1) / 2;

    // Actual sum of array
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    // Missing number
    return total - sum;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter " << n - 1 << " numbers: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number is: " << findMissing(arr, n) << endl;

    return 0;
}
