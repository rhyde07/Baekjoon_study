#include <iostream>
#include <string>
using namespace std;

string h, n;
int f(int i, int cnt);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int sum = 0;
	cin >> h >> n;
	
	for(int i = 0; i < h.length(); i++) {
		if(h[i] == n[0]) sum += f(i, 1);
	}
	
	cout << sum;
	
	return 0;
}

int f(int i, int cnt) {
	if(i+cnt <= h.length() && cnt <= n.length()) {
		if(cnt == n.length() && h[i+cnt-1] == n[cnt-1]) {
			return 1;
		}
		else if(h[i+cnt-1] == n[cnt-1]) {
			return f(i, cnt+1);
		}
		else return 0;

	}
	else return 0;
}
