#include <iostream>
using namespace std;

int sumDigit(int n) {
    if (n < 1 && n >= 0) {
        return (n % 10);
    }
    if (n > -1 && n <= 0) {
        return (n % 10) * -1;
    }

    if (n > 0)
        return (n % 10) + sumDigit(n / 10);

    return ((n % 10) * -1) + sumDigit(n / 10);
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << sumDigit(n) << endl;

    return 0;
}
