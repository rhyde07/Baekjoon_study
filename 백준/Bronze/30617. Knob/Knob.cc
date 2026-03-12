#include <iostream>
#include <cmath>
using namespace std;
int before_a = 2, before_b = 2;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cnt = 0;
	cin >> n;
	
	while(n--) {
		int a, b;
		cin >> a >> b;
		
		if(before_b != 2) {
			if(a != 0 && before_a == a) cnt++;
			if(b != 0 && before_b == b) cnt++;
		}
		if(a == b && a != 0) cnt++;
		
		before_a = a;
		before_b = b;
	}
	
	cout << cnt;
	
	return 0;
}