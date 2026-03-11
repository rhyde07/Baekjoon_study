#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, a , b;
	cin >> n >> a >> b;
	
	a /= 2;
	
	if(a + b > n) cout << n;
	else cout << a + b;
	
	return 0;
}