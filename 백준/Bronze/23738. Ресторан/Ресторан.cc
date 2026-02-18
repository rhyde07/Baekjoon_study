#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string l;
	cin >> l;
	
	for(int i = 0; i < l.length(); i++) {
		char a = l[i];
		
		if(a == 'A' || a == 'K' || a == 'M' || a == 'O' || a == 'T'){
			a += 32;
			cout << char(a);
		} 
		else if(a == 'B') cout << 'v';
		else if(a == 'E') cout << "ye";
		else if(a == 'H') cout << 'n';
		else if(a == 'P') cout << 'r';
		else if(a == 'C') cout << 's';
		else if(a == 'Y') cout << 'u';
		else if(a == 'X') cout << 'h';	
	}
	return 0;
}