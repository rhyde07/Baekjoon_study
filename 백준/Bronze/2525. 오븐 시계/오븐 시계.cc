#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, t;
	cin >> a >> b >> t;
	
	b += t;
	if(b >= 60) {
		int k = b / 60;
		b -= 60*k;
		a += k;
	}
	if(a >= 24) {
		int k = a / 24;
		a -= 24*k;
	}
	
	cout << a << " " << b;
	return 0;
}