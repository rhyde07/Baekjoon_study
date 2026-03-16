#include <iostream>
#include <map>
using namespace std;
map<string, int> m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, sum = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		string l;
		cin >> l;
		
		if(l == "ENTER") {
			sum += m.size();
			m.clear();
		}
		
		else m.insert({l, 0});
	}
	
	sum += m.size();
	cout << sum;
	
	return 0;
}