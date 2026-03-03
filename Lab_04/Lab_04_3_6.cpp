#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    if (s.empty()) return 0;

    char bestChar = s[0];
    int bestLen = 1;
    int bestPos = 1;

    char currChar = s[0];
    int currLen = 1;
    int currPos = 1;

    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == currChar) {
            currLen++;
        } else {
            if (currLen > bestLen) {
                bestLen = currLen;
                bestChar = currChar;
                bestPos = currPos;
            }
            currChar = s[i];
            currLen = 1;
            currPos = i + 1;
        }
    }

    if (currLen > bestLen) {
        bestLen = currLen;
        bestChar = currChar;
        bestPos = currPos;
    }

    cout << bestChar << " " << bestLen << " " << bestPos;

    return 0;
}