#include <iostream>
#include <vector>

int main() {
    int n;
    char letter;
    std::cin >> n;

    std::vector<char> letters(n);

    for (int i = 0; i < n; i++) {
        char ch;
        std::cin >> ch;
        letters[i] = ch;
    }

    std::cin >> letter;

    char balancedChar = letters[0]; // Initialize with the first character

    for (int i = 0; i < n; i++) {
        if (letters[i] > letter) {
            balancedChar = letters[i];
            break;
        }
    }

    std::cout << balancedChar << std::endl;

    return 0;
}
