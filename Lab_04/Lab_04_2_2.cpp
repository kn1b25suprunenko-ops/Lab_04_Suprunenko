#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    vector<string> words;
    string w;

    // розбиваємо на слова
    while (ss >> w) {
        words.push_back(w);
    }

    if (words.size() > 1) {
        swap(words.front(), words.back());
    }

    // вивід
    for (int i = 0; i < words.size(); ++i) {
        cout << words[i];
        if (i != words.size() - 1) cout << " ";
    }

    return 0;
}