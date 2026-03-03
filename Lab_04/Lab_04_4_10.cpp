#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    string result = "";

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            result += c;
            result += c;
        } else {
            result += c;
        }
    }

    cout << result;

    return 0;
}