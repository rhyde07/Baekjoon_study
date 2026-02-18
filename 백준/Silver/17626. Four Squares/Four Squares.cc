#include <iostream>
#include <cmath>
using namespace std;
int arr[500001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, i = 1, cnt = 1;
	cin >> n;
	
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	
	for(int i = 3; i <= n; i++) {
		arr[i] = 4;
		
		for(int j = 1; j*j <= i; j++) {
			arr[i] = min(arr[i], 1 + arr[i-j*j]);
		}		
	}
	
	cout << arr[n];
	
	return 0;
}