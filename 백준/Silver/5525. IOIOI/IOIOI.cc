#include <iostream>
using namespace std;
string Pn;
int s, n, sum;
int f(int Index, int FindingLen);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> s >> n;
	cin >> Pn;
	
	for(int i = 0; i < n; i++) {
		if(Pn[i] == 'I') {
			int t = f(i + 1, s);
			if(t) {
				sum += t;
				i += ((2 * s + 1) + (t - 1) * 2) - 1; // oo(ioioi)(oi)(oi)...
			}
		}
	}
	
	cout << sum;
	
	return 0;
}

int f(int Index, int FindingLen) {
	int cnt = 0;
	bool FindIO = false;
	
	while(Index < n) {
		
		if(FindIO) {
			if(Pn[Index] == 'I') {
				FindIO = false;
				cnt++;
			} else break;
		}
		
		else if(!FindIO) {
			if(Pn[Index] == 'O') {
				FindIO = true;
			} else break;
		}
		
		Index++;
	}
	
	if(cnt < FindingLen) return 0;
	else return cnt - FindingLen + 1;
}