#include <iostream>
using namespace std;

int binay_seach_first(int a[], int taget, int n){
	int left = 0, right = n - 1;
	while (left <= right){
		int mid = left + (right - left) / 2;
		if (taget < a[mid]) right = mid - 1;
		else if (taget > a[mid]) left = mid + 1;
		else return mid;
	}
	return -1;
}

int binay_seach_second(int a[], int taget, int n){
	int left = 0, right = n - 1;
	while (left <= right){
		int mid = left + (right - left) / 2;
		if (taget > a[mid]) right = mid - 1;
		else if (taget < a[mid]) left = mid + 1;
		else return mid;
	}
	return -1;
}

int main(){
	int n, x, y, ind;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> x >> y;
	int a2[x][y];
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			cin >> a2[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < x; j++) {
			if (j % 2 == 0) ind = binay_seach_second(a2[j], a[i], y);
            else ind = binay_seach_first(a2[j], a[i], y);
			if (ind != -1){
				cout << j << " " << ind << endl;
				break;
			}else if(ind == -1 && j == x - 1){
				cout << -1 << endl;
				break;
			}
		}
	}
	return 0;
}