#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b, c, cnt;
	
	cin >> n;
	
	while(n > 0) {
		cnt = 0;
		cin >> a >> b >> c;
		for(int i = 1; i <= a; i++) {
			for(int j = 1; j <= b; j++) {
				for(int k = 1; k <= c; k++) {
					if(i%j == j%k && j%k == k%i) {
						cnt++;
					}
				}
			}
		}
		cout << cnt << "\n";
		n--;
	}
	
	
	return 0;
}