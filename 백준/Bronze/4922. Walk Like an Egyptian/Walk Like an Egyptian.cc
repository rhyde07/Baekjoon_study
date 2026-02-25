#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	
	while(1) {
		cin >> n;
		if(!n) break;
		int sum = 1 + n*(n-1);
		cout << n << " => " << sum << "\n";
	}
	
	return 0;
}
