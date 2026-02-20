#include <iostream>
#include <vector>
using namespace std;

vector<int> v[1001];
int visit[1001], sum;
void check(int i);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i = 1; i <= n; i++) {
		if(visit[i] == 0) {
			check(i);
			sum++;
		}
	}
	cout << sum;
	
	return 0;
}

void check(int num) {
	for(int i = 0; i < v[num].size(); i++) {
		int a = v[num][i];
		if(!visit[a]) {
			visit[a] = 1;
			check(a);
		}
	}
	
}