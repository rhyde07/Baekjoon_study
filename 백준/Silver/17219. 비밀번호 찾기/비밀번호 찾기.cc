#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, string> a;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		string s, p;
		cin >> s >> p;
		a.insert({s, p});
	}
	
	for(int i = 0; i < m; i++) {
		string s;
		cin >> s;
		cout << a[s] << "\n";
	}
	
	return 0;
}