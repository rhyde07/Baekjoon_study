#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int m, k;
	
	cin >> m >> k;
	
	if(m % k) cout << "No";
	else cout << "Yes";
	
	return 0;
}