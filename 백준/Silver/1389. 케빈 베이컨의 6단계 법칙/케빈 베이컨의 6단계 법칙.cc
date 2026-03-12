#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int min_i = 0, min_bacon = 100000000;
int visited[5001], cnt[5001];

int calcBacon(int a);
vector<int> v[5001];
queue<int> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i = 1; i <= n; i++) {
		fill(visited, visited + 5001, 0);
		fill(cnt, cnt + 5001, 0);
		int t = calcBacon(i);
		if(t < min_bacon) {
			min_bacon = t;
			min_i = i;
		}
	}
	
	cout << min_i;
	
	return 0;
}

int calcBacon(int a) {
	q.push(a);
	visited[a] = 1;
	
	while(!q.empty()) {
		int t = q.front();
		for(int i = 0; i < v[t].size(); i++) {
			int k = v[t][i];
				
			if(visited[k] == 0){
				q.push(k);
				visited[k] = 1;
				cnt[k] = cnt[t] + 1;
			}
		}
		q.pop();
	}
	
	int sum = 0;
	for(int i = 1; i <= n; i++) sum += cnt[i];
	
	return sum;
}
