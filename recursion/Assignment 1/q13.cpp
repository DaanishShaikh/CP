#include <iostream>
using namespace std;

int occurence(int arr[], int a, int len, int i) {
    if (i == len - 1 && arr[i] == a)
        return 1;

    if (arr[i] == a) {
        return 1 + occurence(arr, a, len, i + 1);
    }
    return 0 + occurence(arr, a, len, i + 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a;
    cout << "Enter the element to count occurrences: ";
    cin >> a;

    cout << occurence(arr, a, n, 0) << endl;

    return 0;
}
