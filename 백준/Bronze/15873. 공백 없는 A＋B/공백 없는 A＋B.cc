#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string l;
	
	cin >> l;
	int a, b;
	
	if(l.length() == 2) {
		a = l[0] - '0';
		b = l[1] - '0';
		cout << a + b;
	}
	
	else if(l.length() == 3) {
		if(l[1] == '0') {
			a = 10;
			b = l[2] - '0';
			cout << a + b;
		}
		else {
			a = l[0] - '0';
			b = 10;
			cout << a + b;
		}
	}
	
	else if(l.length() == 4) {
		cout << 20;
	}
	
	return 0;
}