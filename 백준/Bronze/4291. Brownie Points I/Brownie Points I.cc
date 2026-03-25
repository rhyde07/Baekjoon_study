#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1) {
		vector<pair<int, int>> v;
		int n, mid_a, mid_b, sum = 0, mid_sum = 0;
		
		cin >> n;
		if(n == 0) break;
		
		for(int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			v.push_back({a, b});
			
			if(i == (n / 2)) {
				mid_a = a;
				mid_b = b;
			} 
		}
		
		for(int i = 0; i < n; i++) {
			if((v[i].first > mid_a && v[i].second > mid_b) || (v[i].first < mid_a && v[i].second < mid_b)) {
				sum++;
			}
			else if((v[i].first == mid_a) || (v[i].second == mid_b)) {
				mid_sum++;
			}
		}
		
		cout << sum << " " << n - sum  - mid_sum << "\n";
	}
	
	return 0;
}
