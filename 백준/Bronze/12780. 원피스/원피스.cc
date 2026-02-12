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
		if(h[i] == n[0])
			if(h.substr(i, n.length()) == n) 
				sum++;
	}
	
	cout << sum;
	
	return 0;
}