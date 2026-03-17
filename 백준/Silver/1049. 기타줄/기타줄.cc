#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	double min_a = 1001, min_b = 1001;
	cin >> n >> m;
	
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		if(min_a > a) min_a = a;
		if(min_b > b) min_b = b;
	}
	
	if((min_a/6) > min_b) cout << n * min_b;
	else				  cout << min((n/6 + 1) * min_a, (n/6) * min_a + (n%6) * min_b);
		
	return 0;
}
