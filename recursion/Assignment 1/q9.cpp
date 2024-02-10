#include <iostream>
#include <string>
using namespace std;

bool Alpha[26];

void Duplicates(string word, int ind, string newWord) {
    // Base case
    if (ind == word.length()) {
        cout << newWord << endl;
        return;
    }

    char currChar = word[ind];
    if (Alpha[currChar - 'a'] == true) {
        Duplicates(word, ind + 1, newWord);
    } else {
        newWord += currChar;
        Alpha[currChar - 'a'] = true;
        Duplicates(word, ind + 1, newWord);
    }
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; i < 26; i++) {
        Alpha[i] = false;
    }

    Duplicates(word, 0, "");

    return 0;
}
