#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int sum = 0, num = 0, check = 0;
	string l;
	cin >> l;
	
	for(int i = 0; i < l.length(); i++) {
		int t = l[i] -'0';

		if(t >= 0 && t <= 9) {
			num = num*10 + t;
		}
		
		else {
			if(check) sum -= num;
			else sum += num;
			num = 0;
			
			if(l[i] == '-') check = 1;
		}
	}
	
	if(check) sum -= num;				
	else sum += num;

	cout << sum;
	return 0;
}