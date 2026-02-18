#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b;
	cin >> a >> b;
	a -= 9;
	cout << a * 60 + b;
	
	return 0;
}