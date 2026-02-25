#include <iostream>
using namespace std;
void f(string l);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int a = 2024, b = 8; 
	int t = (b - 1) + (n - 1) * 7;
	
	a += t / 12;
	b = t % 12 + 1;
	
	cout << a << " " << b;
	return 0;
}
