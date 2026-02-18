#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k;
	cin >> k;
	
	while(k--) {
		int a;
		char b;
		cin >> a >> b;
		for(int i = 0; i < a; i++) {
			cout << b;
		}
		cout << "\n";
	}
	
	return 0;
}