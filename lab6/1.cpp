#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_vowel(char c) {
    c = tolower(c); 
    switch (c) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
        return true;
    default:
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    vector<char> v; 
    vector<char> c; 

    char letter; 

    for (int i = 0; i < n; ++i) {
        cin >> letter;
        if (is_vowel(letter)) {
            v.push_back(letter);
        } else {
            c.push_back(letter);
        }
    }

    sort(v.begin(), v.end());
    sort(c.begin(), c.end());

    vector<char> res; 

    for (int i = 0; i < v.size(); ++i) {
        res.push_back(v[i]);
    }
    for (int i = 0; i < c.size(); ++i) {
        res.push_back(c[i]);
    }


    for (int i = 0; i < res.size(); ++i) {
        cout << res[i];
    }

    return 0;
}
