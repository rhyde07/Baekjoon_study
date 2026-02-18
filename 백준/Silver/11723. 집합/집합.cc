#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n;
	int m = 0;
	
	cin >> n;
	cin.ignore();
	
	for(long long i = 0; i < n; i++) {
		string s, tp;
		int x;
		
		cin >> tp; 
		
		if(tp == "add") {
			cin >> x;
			m |= 1 << x;
		}
		
		else if(tp == "remove") {
			cin >> x;
			m &= ~(1 << x);
		}
		
		else if(tp == "check") {
			cin >> x;
			if ((m & (1 << x))) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		
		else if(tp == "toggle") {
			cin >> x;
			m ^= 1 << x;
		}
		
		else if(tp == "all") {
			m = (1 << 21) - 1;
		}
		
		else if(tp == "empty") {
			m = 0;
		}
		
	}
	
	return 0;
}