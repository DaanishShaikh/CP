#include <iostream>
using namespace std;

int strlen(string s) {
    int len = 0;
    for (char c : s) {
        len++;
    }
    return len;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << strlen(s) << endl;

    return 0;
}
