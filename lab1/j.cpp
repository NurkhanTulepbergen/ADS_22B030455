#include <iostream>
#include <queue>
using namespace std;
int main() {
    int n;
    char s;
    deque<int> h;
    while(cin >> s) {
        if(s == '!') {
            break;
        }else if(s == '*' && h.empty()) {
            cout << "error" << endl;
        }else if(s == '+') {
            cin >> n;
            h.push_front(n);
        }else if(s == '-') {
            cin >> n;
            h.push_back(n);
        }else if(s == '*' && h.size() != 1) {
            cout << h.front() + h.back() << endl;
            h.pop_back();
            h.pop_front();
        }else if(s == '*' && h.size() == 1) {
            cout << h.front() + h.back() << endl;
            h.pop_back();
        }
    }
}