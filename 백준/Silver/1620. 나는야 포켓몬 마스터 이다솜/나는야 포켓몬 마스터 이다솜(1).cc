#include <iostream>
#include <string>
#include <unordered_map>
#include <ctype.h>

using namespace std;
unordered_map<string, int> aNum;
string aName[100002];
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	aNum.reserve(n); //미리 잡아주기 
	
	for(int i = 1; i <= n; i++) {
		string l;
		cin >> l;
		aNum.insert({l, i});
		aName[i] = l;
		
	}
	
	for(int i = 0; i < m; i++) {
		string l;
		cin >> l;
		
		if(isdigit(l[0])) {
			int t = stoi(l);
			cout << aName[t] << "\n";
		}
		else cout << aNum[l] << "\n";
	}
	
	return 0;
}
