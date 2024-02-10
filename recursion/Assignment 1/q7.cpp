#include <iostream>
using namespace std;

int facto(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * facto(n - 1);
}

int comb(int n, int r) {
    if (n < r)
        return -1;
    return facto(n) / (facto(n - r) * facto(r));
}

int main() {
    int n, r, m;
    cout << "Enter n, r, and m: ";
    cin >> n >> r >> m;

    if (n < r)
        cout << "Undefined" << endl;
    else
        cout << (comb(n, r) % m) << endl;

    return 0;
}
