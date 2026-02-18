#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a;
	cin >> a;
	if(a % 3 == 1) cout << "U";
	else if(a % 3 == 2) cout << "O";
	else cout << "S";
	
	return 0;
}