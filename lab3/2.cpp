#include <iostream>
#include <algorithm>
using namespace std;
int linear_serach(int arr[],int sizeOfArr,int x) {
    for(int i = 0;i<=sizeOfArr;i++) {
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
};

int binary_serach(int arr[],int sizeOfArr, int x) {
    int left = 0;
    int right = sizeOfArr - 1;
    while(left <= right) {
        int mid = (left+right)/2;
        if(arr[mid] == x) {
            return mid;
        }else if(x < arr[mid]) {
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    }
    int h;
    cin >> h;
    cout << binary_serach(a, n, h);
}