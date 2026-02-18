#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<char> a, b;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int check = 0, emp = 0;
	string l;
	getline(cin, l);
	
	for(int i = 0; i < l.length(); i++) {
		if((i == 0 || i == l.length() - 1) && l[i] != '\"') {
			check = 0;
			break;
		}
		
		if(l[i] == '\"') b.push_back(l[i]);
		else if((l[i] >= 'A' && l[i] <= 'Z') || (l[i] >= 'a' && l[i] <= 'z')) {
			emp = 1; check = 1;
			a.push_back(l[i]);
		}
		
		else a.push_back(l[i]);
	}

	if(b.size() != 2 || !check || !emp) cout << "CE";
	else
		for(int i = 0; i < a.size(); i++)
				cout << a[i];
	
	return 0;
}
