#include <iostream>
#include <vector>
using namespace std;

void solve(int x, int y, int l);
int arr[129][129];
int white, blue;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			int t;
			cin >> t;
			arr[i][j] = t;
		}
	}
	
	solve(0, 0, n);
	cout << white << "\n" << blue;
	return 0;
}

void solve(int x, int y, int l) {
	int color = arr[x][y];
	for(int i = x; i < x+l; i++) {
		for(int j = y; j < y+l; j++) {
			if(color != arr[i][j]) {
				int size = l/2;
				solve(x, y, size);
				solve(x + size , y, size);
				solve(x, y + size, size);
				solve(x + size, y + size, size);
				return;
			}
		}
	}
	if(color == 0) white += 1;
	else blue += 1;
}