#include <iostream>
#include <string>
using namespace std;

void Reverse(string name, int n, string reve) {
    if (n == -1) {
        cout << reve << endl;
        return;
    }

    Reverse(name, n - 1, reve + name[n]);
}

int main() {
    string name;
    cout << "Enter a string: ";
    getline(cin, name);
    
    Reverse(name, name.length() - 1, "");

    return 0;
}
