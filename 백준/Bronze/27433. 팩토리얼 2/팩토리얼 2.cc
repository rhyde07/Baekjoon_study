#include <iostream>
using namespace std;
long long f(long long n);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long a;
	cin >> a;
	cout << f(a);
	
	return 0;
}

long long f(long long a) {
	if(a == 0) return 1;
	else return a * f(a-1);
}