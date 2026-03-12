#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n--) {
		int a, b;
		cin >> a >> b;
		
		int s1 = b * (b + 1) / 2;
		int s2 = pow(b, 2);
		int s3 = b * (b + 1);
		
		cout << a << " " << s1 << " " << s2 << " " << s3 << "\n";
	}
	
	
	return 0;
}