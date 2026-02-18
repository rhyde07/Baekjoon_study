#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	
	int a, b, c;
	cin >> a >> b >> c;
	if(a + b == c) cout << "correct!";
	else cout << "wrong!";
	
	return 0;
}