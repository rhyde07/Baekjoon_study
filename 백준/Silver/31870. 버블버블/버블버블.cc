#include <iostream>
using namespace std;
int arr[1000], arr1[1000], n;
int bub(int* a);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		arr1[n - i - 1] = arr[i];
	}
	
	int cnt = bub(arr);
	int cnt1 = bub(arr1) + 1;
	
	if(cnt < cnt1) cout << cnt;
	else		   cout << cnt1;
	
	return 0;
}

int bub(int* a) {
	int cnt = 0;
	
	for(int i = 0; i < n; i++) {
		for(int j = n - 1; j > i; j--) {
			
			if(a[j - 1] > a[j]){
				int t = a[j - 1];
				a[j - 1] = a[j];
				a[j] = t;
				cnt++;
			}
			
		}
	}
	
	return cnt;
}