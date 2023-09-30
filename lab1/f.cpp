#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool isPrime(int g) {
    if(g <= 1) {
        return false;
    }for(int i=2;i<=sqrt(g);i++) {
        if(g % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i=2;v.size()<=n;i++) {
        if(isPrime(i)){
            v.push_back(i);
        }
    }
	cout << v[n-1];
}