//2시간 뻘짓 
#include <iostream>
using namespace std;

string Pn;
long long s, n, Index, sum, cnt;
bool check = false; 

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> s >> n;
	cin >> Pn;
	
	while(Index + 2 < n) {
		if(Pn[Index] == 'I' && Pn[Index+1] == 'O' && Pn[Index+2] == 'I') {
			cnt++;
			Index += 2;
			
			if(cnt == s) {
				sum++;
				cnt --;
			}
		} else {
			Index++;
			cnt = 0;
		}
	}
	cout << sum;
	
	return 0;
}