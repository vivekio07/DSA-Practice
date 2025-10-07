#include <iostream>
using namespace std;

/*
    QUESTION:
    You are given an array of size (n-1) containing numbers from 1 to n.
    One number is missing in the sequence.
    Write a program in C++ to find the missing number.
    
    Example:
    Input: n = 5, arr[] = {1, 2, 4, 5}
    Output: 3
*/

int findMissing(int arr[], int n) {
    // Expected sum of numbers from 1 to n
    int total = n * (n + 1) / 2;

    // Actual sum of array elements
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    // Missing number = total sum - actual sum
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
