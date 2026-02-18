#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t > 0) {
		unordered_map<string, int> m;
		int sum = 1;
		int n;
		cin >> n;
		
		for(int i = 0; i < n; i++) {
			string nm, type;
			cin >> nm >> type;
			m[type]++;
		}
		
		for(auto it = m.begin(); it != m.end(); it++){
			sum *= (it->second + 1);
		}
		cout << sum-1 << "\n";
		t--;
	}
	return 0;
}