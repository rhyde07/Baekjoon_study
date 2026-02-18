#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
void dfs(int a);
void bfs(int a);

int check[1001];
int check1[1001];
vector<int> v1[1001];
queue<int> q1;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, v;
	cin >> n >> m >> v;
	
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v1[a].push_back(b);
		v1[b].push_back(a);
	}
	
	for(int i = 1; i <= n; i++)
		sort(v1[i].begin(), v1[i].end());
	
	dfs(v);
	cout << "\n";
	bfs(v);
	
	return 0;
}

void dfs(int a) {
	if(!check[a]) {
		check[a] = 1;
		cout << a << " ";
		for(int i = 0; i < v1[a].size(); i++) {
			dfs(v1[a][i]);
		}
	}
}

void bfs(int a) {
	q1.push(a);
	check1[a] = 1;
	
	while(!q1.empty()) {
		int k = q1.front();
		cout << k << " ";	
		
		for(int i = 0; i < v1[k].size(); i++) {
			int t = v1[k][i];
            if(!check1[t]) {
				check1[t] = 1;
				q1.push(t);
			}
		}
		q1.pop();
	}		
}