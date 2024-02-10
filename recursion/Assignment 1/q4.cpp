#include <iostream>
using namespace std;

void Fibo(long a, long b, int n) {
    if (n == 0)
        return;

    cout << " " << (a + b);
    Fibo(b, a + b, n - 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "0 1";
    long a = 0, b = 1;
    Fibo(a, b, n);
    
    return 0;
}
