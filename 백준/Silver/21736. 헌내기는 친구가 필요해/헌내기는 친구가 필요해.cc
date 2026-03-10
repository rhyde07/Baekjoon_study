#include <iostream>
#include <queue>
#include <utility>
using namespace std;

char arr[600][600];
int visit[600][600];
queue<pair<int, int>> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, start_x, start_y, cnt = 0;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {		
			char t;
			cin >> t;
			arr[i][j] = t;
			
			if(t == 'I') {
				start_x = i;
				start_y = j;
			}
		}
	}
	
    q.push({start_x, start_y});
    visit[start_x][start_y] = 1;
	
    while(!q.empty()) {
		int i = q.front().first;
		int j = q.front().second;
        if(arr[i][j] == 'P') cnt++;
        
        if(i != 0 && arr[i-1][j] != 'X' && !visit[i-1][j]) {
            q.push({i-1, j});
            visit[i-1][j] = 1;
        }
        if(i != n-1 && arr[i+1][j] != 'X' && !visit[i+1][j]) {
            q.push({i+1, j});
            visit[i+1][j] = 1;
        }
        if(j != 0 && arr[i][j-1] != 'X' && !visit[i][j-1]) {
            q.push({i, j-1});
            visit[i][j-1] = 1;
        }
        if(j != m-1 && arr[i][j+1] != 'X' && !visit[i][j+1]) {
            q.push({i, j+1});
            visit[i][j+1] = 1;
        }
        q.pop();
	}
	
    if(cnt) cout << cnt;
	else cout << "TT";
	
	return 0;
}