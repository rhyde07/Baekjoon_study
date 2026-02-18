#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, a, sum;
	cin >> n;
	
	sum = - n + 1;
	for(int i = 0; i < n; i++) {
		cin >> a;
		sum += a;
	}
	cout << sum;
	
	return 0;
}