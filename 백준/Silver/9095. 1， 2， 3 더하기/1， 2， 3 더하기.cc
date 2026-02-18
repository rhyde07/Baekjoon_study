#include <iostream>
using namespace std;
int f(int *a, int m);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, a[12]={};
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		cout << f(a, m) << "\n";
	}
	
	return 0;
}

int f(int *a, int m) {
	if(a[m] != 0) return a[m];
	return f(a, m-1) + f(a, m-2) + f(a, m-3);
}