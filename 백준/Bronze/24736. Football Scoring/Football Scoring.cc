#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[5];
	
	int n = 2;
	while(n--) {
		int sum = 0;
		for(int i = 0; i < 5; i++) {
			int t;
			cin >> t;
			arr[i] = t;
		}
		sum = arr[0] * 6 + arr[1] * 3 + arr[2] * 2 + arr[3] * 1 + arr[4] * 2;
		cout << sum << " ";
	}
	
	return 0;
} 