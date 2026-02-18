#include <iostream>
using namespace std;
int arr[100001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		int t;
		cin >> t;
		arr[i] = arr[i-1] + t;
	}
	
	for(int i = 1; i <= m; i++){
		int a, b;
		cin >> a >> b;
		cout << arr[b]-arr[a-1] << "\n";
	}
	
	return 0;
}