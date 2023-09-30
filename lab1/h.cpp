#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int g) {
    if(g <= 1) {
        return false;
    }for(int i=2;i<sqrt(g);i++) {
        if(g % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    if (isPrime(n)) cout << "YES" << endl; else cout << "NO";
}