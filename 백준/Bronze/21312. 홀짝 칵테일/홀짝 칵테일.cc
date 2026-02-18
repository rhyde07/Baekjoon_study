#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	
	int a, b, c;
	cin >> a >> b >> c;
	
	int mul = 1;
	if(a % 2 != 0) mul *= a;
	if(b % 2 != 0) mul *= b;
	if(c % 2 != 0) mul *= c;
	if(mul == 1 && a != 1 && b != 1 && c != 1) mul = a * b * c;
	
	cout << mul;
	return 0;
}