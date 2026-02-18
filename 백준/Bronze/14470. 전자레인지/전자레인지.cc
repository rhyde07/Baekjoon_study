#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	
	if(a > 0) cout << (b - a) * e; 
	else cout << (- a * c) + d + (b * e); 
	
	return 0;
}