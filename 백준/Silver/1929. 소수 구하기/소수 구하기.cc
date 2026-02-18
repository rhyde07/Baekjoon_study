#include <iostream>
#include <vector>
using namespace std;

int main(){	
	int m, n, i;
	cin >> m >> n;
	
	vector<int> a(n+1, 0);
	a[1] = 1; a[2] = 0; //소수면 0, 아니면 1 
	
	for(int i = 1; i*i <= n; i++) {
		if(!a[i])
		for(int j = i*i; j <= n; j += i) {
			a[j] = 1;
		}
	}
	
	for(int i = m; i <= n; i++){
		if(a[i] == 0) cout << i << endl;
	}
	
	
	return 0;
}