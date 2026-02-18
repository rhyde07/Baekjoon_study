#include <iostream>
#include <algorithm>
using namespace std;
int a[50], b[50];

bool compare(int x, int y) {
	return x > y;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, sum = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		a[i] = t;
	}
	
	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		b[i] = t;
	}
	
	sort(a, a+n);
	sort(b, b+n, compare);
	
	for(int i = 0; i < n; i++) {
		sum += a[i] * b[i];
	}
	
	cout << sum;
	
	return 0;
}