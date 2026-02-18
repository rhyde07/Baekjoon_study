#include <iostream>
#include <vector>
using namespace std;

void f(int x);
vector<int> G[101];
int check[101] = {}, cnt = 0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;	
	
	for(int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	
	check[1] = 1;
	f(1);
	cout << cnt << "\n";
	return 0;
}

void f(int x) {
	for(int i = 0; i < G[x].size(); i++){
		if(check[G[x][i]] == 0) {
			check[G[x][i]] = 1;
			cnt++;
			f(G[x][i]);
		}
	}
}
