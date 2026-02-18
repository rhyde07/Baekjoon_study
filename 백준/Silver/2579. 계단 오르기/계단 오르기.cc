#include <iostream>
using namespace std;
int arr[300];
int s[300];
int f(int n);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		arr[i] = t;
		if(i == 0) s[i] = t;
		else if(i == 1) s[i] = arr[0] + t;
		else if(i == 2) s[i] = max(arr[1], arr[0]) + t;
		else s[i] = f(i);
	}
	
	cout << s[n-1] << "\n";
	
	return 0;
}

int f(int n) {
	if(s[n] != 0) return s[n];
	else return max(f(n-3) + arr[n-1] + arr[n], f(n-2) + arr[n]);
}