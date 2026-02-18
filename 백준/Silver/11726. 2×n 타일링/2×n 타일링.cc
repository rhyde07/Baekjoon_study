#include <iostream>
using namespace std;
int arr[1001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	arr[1] = 1;
	arr[2] = 2;
	
	int n, i = 3;
	cin >> n;
	
	while(i <= n) {
		arr[i] = (arr[i-1] + arr[i-2]) % 10007;
		i++;
	}
	cout << arr[n] << "\n";
	
	return 0;
}
