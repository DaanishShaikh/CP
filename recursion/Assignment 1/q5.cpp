#include <iostream>
using namespace std;

long modExpo(long b, long p, long m) {
    if (p == 0)
        return 1;
    if (p == 1)
        return b % m;
    long temp = modExpo(b, p / 2, m);

    if (p % 2 == 1) {
        return (temp * temp * b) % m;
    } else {
        return (temp * temp) % m;
    }
}

int main() {
    long b, p, m;
    cout << "Enter base (b), power (p), and modulo (m): ";
    cin >> b >> p >> m;

    cout << modExpo(b, p, m) << endl;
    
    return 0;
}
