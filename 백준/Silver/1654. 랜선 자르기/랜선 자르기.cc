#include <iostream>
using namespace std;
int a[10000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k, n;
	long long high = 0, low = 1;
	cin >> k >> n;
	
	for(int i = 0; i < k; i++) {
		int t;
		cin >> t;
		a[i] = t;
		if(high < a[i]) high = a[i];
	}
	
	long long mid, ans = 0;
	
	while(1) {
		mid = (high + low) / 2;
		if(high < low) break;
		
		long long sum = 0;
		for(int j = 0; j < k; j++) sum += a[j] / mid;
		
		if(sum >= n) {
			if(ans < mid) {
				ans = mid;
			}
			low = mid + 1;
		}
		else high = mid - 1;
	}
	
	cout << ans;
	return 0;
}