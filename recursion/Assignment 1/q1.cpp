#include <iostream>
using namespace std;

int calcFacto(int n) {
    // Base case
    if (n == 1 || n == 0) {
        return 1;
    }
    int facto = calcFacto(n - 1);  // Recursive statement
    int fact_n = n * facto;
    return fact_n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << calcFacto(n) << endl;
    return 0;
}
