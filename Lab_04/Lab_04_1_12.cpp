#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    string result = "";
    bool newSentence = true;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];

        if (isalpha(c)) {
            if (newSentence) {
                result += toupper(c);
                newSentence = false;
            } else {
                result += c;
            }
        }
        else {
            result += c;
        }

        if (c == '.' || c == '!' || c == '?' || c == ';' || c == ':') {
            newSentence = true;

            if (i + 1 < s.size() && s[i+1] != ' ')
                result += ' ';
        }
    }

    cout << result;
    return 0;
}