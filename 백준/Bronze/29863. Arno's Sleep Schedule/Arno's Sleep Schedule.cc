#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b;
	cin >> a >> b;
	if(a >= 20) cout << - a + b + 24;
	else cout << b - a;
	
	return 0;
}
