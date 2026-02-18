#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, a, b;
	cin >> n >> a >> b;
	if(n > b) cout << "Bus";
	else if(a > b) cout << "Subway";
	else if(a == b) cout << "Anything";
	else cout << "Bus";
	
	return 0;
}

//유튜브 재미있어요 꺄 