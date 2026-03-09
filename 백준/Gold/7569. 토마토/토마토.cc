#include <iostream>
#include <queue>
using namespace std;

struct ST {
	int i;
	int j;
	int k;
	int cnt;
};
int arr[100][100][100];
void f(int i, int j, int k, int cnt);
queue<ST> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m, n, h, max_cnt = 0, apple_cnt = 0;
	cin >> m >> n >> h;
	
	for(int k = 0; k < h; k++) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> arr[i][j][k];
				if(arr[i][j][k] == 1) q.push({i, j, k, 0});
			}
		}
	}
	
	if(q.empty()) {
		cout << -1;
		return 0;
	}
	
	else {
		while(!q.empty()) {
			int i = q.front().i;
			int j = q.front().j;
			int k = q.front().k;
			int cnt = q.front().cnt;
			max_cnt = cnt;
			
			if(i > 0 && arr[i - 1][j][k] == 0) 	f(i - 1, j, k, cnt);
			if(j > 0 && arr[i][j - 1][k] == 0) 	f(i, j - 1, k, cnt);
			if(k > 0 && arr[i][j][k - 1] == 0) 	f(i, j, k - 1, cnt);
			if(i < n - 1 && arr[i + 1][j][k] == 0) 	f(i + 1, j, k, cnt);
			if(j < m - 1 && arr[i][j + 1][k] == 0) 	f(i, j + 1, k, cnt);
			if(k < h - 1 && arr[i][j][k + 1] == 0) 	f(i, j, k + 1, cnt);
			
			q.pop();
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			for(int k = 0; k < h; k++) {
				if(arr[i][j][k] != 0) apple_cnt++;
			}
		}
	}
	
	if(apple_cnt == n*m*h) cout << max_cnt;
	else cout << -1;
	
	return 0;
}

void f(int i, int j, int k, int cnt) {
	arr[i][j][k] = 1;
	q.push({i, j, k, cnt + 1});
}