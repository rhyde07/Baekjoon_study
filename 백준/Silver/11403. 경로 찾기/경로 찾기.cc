#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> G[101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			int t;
			cin >> t;
			G[i].push_back(t);
		}
	}

	for(int k = 0; k < n; k++) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				G[i][j] = G[i][j] || (G[i][k] + G[k][j] >= 2);
			}
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << G[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
