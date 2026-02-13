#include <iostream>
using namespace std;

int arr[50][50], m, n;
void check(int a, int b);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	
	while(t--) {
		int sum = 0, k;
		cin >> m >> n >> k;
		for(int i = 0; i < k; i++) {
			int a, b;
			cin >> a >> b;
			arr[a][b] = 1;
		}
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++){
				if(arr[i][j]) {
					sum += 1;
					check(i, j);
				}
			}
		}
		cout << sum << "\n";
	}
	return 0;
}

void check(int a, int b) {
	if(arr[a][b]) {
		arr[a][b] = 0;
		if(a > 0) check(a-1 , b);
		if(b > 0) check(a, b-1);
		if(a < m-1) check(a+1, b);
		if(b < n-1) check(a, b+1);
	}
}