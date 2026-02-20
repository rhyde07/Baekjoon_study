#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long high, low, mid;
int bi(int a);
vector<int> v1, v2;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		
		v1.push_back(t);
		v2.push_back(t);
	}
	
	sort(v2.begin(), v2.end());
	v2.erase(unique(v2.begin(), v2.end()), v2.end());
	
	for(int i = 0; i < n; i++) {
		high = v2.size();
		low = 0;
		cout << bi(v1[i]) << " ";
	}
		
	return 0;
}

int bi(int a) {
	mid = (high + low) / 2;
	
	if(v2[mid] == a) return mid;
	else if(v2[mid] < a) {
		low = mid + 1;
		return bi(a);
	}
	else {
		high = mid - 1;
		return bi(a);
	}
}
