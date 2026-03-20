#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cnt = 1;
	cin >> n;
	
	while(n--) {
		map<int, int> m;
		int a;
		cin >> a;
		
		for(int i = 0; i < a; i++) {
			int t;
			cin >> t;
			
			if(m.find(t) != m.end()) m.erase(t);
			else m.insert({t, 0});
		}
		cout << "Case #" << cnt << ": " << m.begin() -> first << "\n";
		cnt++;
	}
	
	return 0;
}
