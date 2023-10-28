#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    int counts[26] = {0};

  
    for (char c : input) {
        counts[c - 'a']++;
    }


    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < counts[i]; j++) {
            cout << (char)('a' + i);
        }
    }

    cout << endl;
    return 0;
}
