#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int tot, n, m, arr[1000][1000], visited[1000][1000];
void DFS(int i, int j, int d, int sum);
void TT(int i,int j);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			TT(i, j);
			
			visited[i][j] = 1;
			DFS(i, j, 1, 0);
			visited[i][j] = 0;
		}
	}
	
	cout << tot;
	
	return 0;
}

void DFS(int i, int j, int d, int sum) {
	
	if(d == 4) {
		sum += arr[i][j];
		if(sum > tot) tot = sum;
		return;
	}
	
	if(i > 0 && visited[i - 1][j] == 0) {
		visited[i - 1][j] = 1;
		DFS(i - 1, j, d + 1, sum + arr[i][j]);
		visited[i - 1][j] = 0;
	}
	
	if(j > 0 && visited[i][j - 1] == 0) {
		visited[i][j - 1] = 1;
		DFS(i, j - 1, d + 1, sum + arr[i][j]);
		visited[i][j - 1] = 0;
	}
	
	if(i < n - 1 && visited[i + 1][j] == 0) {
		visited[i + 1][j] = 1;
		DFS(i + 1, j, d + 1, sum + arr[i][j]);
		visited[i + 1][j] = 0;
	}
	
	if(j < m - 1 && visited[i][j + 1] == 0) {
		visited[i][j + 1] = 1;
		DFS(i, j + 1, d + 1, sum + arr[i][j]);
		visited[i][j + 1] = 0;
	}
	
}

void TT(int i, int j) {
	
	queue<int> q;
	int dx[4] = {1, -1, 0, 0};
	int dy[4] = {0, 0, 1, -1};
	int sum = arr[i][j];
	
	for(int k = 0; k < 4; k++) {
		int idx = i + dx[k];
		int jdy = j + dy[k];
		
		if(idx >= 0 && idx < n && jdy >= 0 && jdy < m) q.push(k);
	}
	
	if(q.size() <= 2) return;
	else if(q.size() == 3) {
		
		while(!q.empty()) {
			int k = q.front();
			sum += arr[i + dx[k]][j + dy[k]];
			q.pop();
		}
		
	}
	else {
		int a[4] = {};
		while(!q.empty()) {
			int k = q.front();
			a[k] = arr[i + dx[k]][j + dy[k]];
			q.pop();
		}
		sort(a, a+4);
		sum += a[1] + a[2] + a[3];
	}
	
	if(sum > tot) tot = sum;
	return;
	
}