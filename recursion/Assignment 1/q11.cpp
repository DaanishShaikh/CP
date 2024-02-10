#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int i, int strlen) {
    if (i == strlen / 2 && strlen % 2 != 0) {
        return true;
    }

    if (i == strlen / 2 - 1 && strlen % 2 == 0 && s[i] == s[i + 1]) {
        return true;
    }

    if (strlen % 2 != 0) {
        if (s[i] == s[strlen - i - 1]) {
            return isPalindrome(s, i + 1, strlen);
        }
    } else {
        if (s[i] == s[strlen - i - 1]) {
            return isPalindrome(s, i + 1, strlen);
        }
    }

    return false;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << isPalindrome(s, 0, s.length()) << endl;

    return 0;
}
