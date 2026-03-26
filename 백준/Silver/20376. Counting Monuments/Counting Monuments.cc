#include <iostream>
#include <string>
#include <set>
using namespace std;
set<string> s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
		
	string l;
	
	while(getline(cin, l)) {
		string l1 = "";
		
		for(int i = 11; i < l.length(); i++) {
			l1 += l[i];
		}
		
		s.insert(l1);
	}
	
	cout << s.size();
	
	return 0;
}
