#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int cnt = 0;
	string l, l1 = "";
	cin >> l;
	l += '.';
	
	for(int i = 0; i < l.length(); i++) {
		if(l[i] == 'X') cnt++;
		else if(l[i] == '.') {
			
			if(cnt % 2) {
				cout << -1;
				return 0;
			}
			else {
				int t = cnt / 4;
				while(t--) l1 += "AAAA";
				cnt %= 4;
				
				cnt /= 2;
				while(cnt--) l1 += "BB";
			}
			
			if(i != l.length() - 1) l1 += '.';
			cnt = 0;
		}
	}
	
	cout << l1;
	
	return 0;
}