#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a, b;
	cin >> a >> b;
	
	int i_l, j_l;
	
	for(int i = 0; i < a.length(); i++) {
		for(int j = 0; j < b.length(); j++) {
			if(a[i] == b[j]) {
				i_l = i;
				j_l = j;
				
				i = a.length(); j = b.length();
			}
		}
	}
	
	for(int j = 0; j < b.length(); j++) {
		for(int i = 0; i < a.length(); i++) {
			if(i == i_l) {
				cout << b[j];
			}
			else if(j == j_l) {
				cout << a[i];
			}
			else cout << ".";
		}
		cout << "\n";
	}
	
	return 0;
}