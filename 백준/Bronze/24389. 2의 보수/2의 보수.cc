#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cnt = 0;
	
	cin >> n;
	
	unsigned int k = (n ^ (~n + 1));
	while(k > 0) {
		cnt += (k & 1);
		k >>= 1;
	}
	
	cout << cnt;
	
	
	return 0;
}