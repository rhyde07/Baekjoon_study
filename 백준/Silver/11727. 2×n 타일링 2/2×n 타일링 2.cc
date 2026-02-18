#include <iostream>
using namespace std;

int arr[1000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, cnt = 2;
	cin >> t;
	arr[0] = 1;
	arr[1] = 3;
	
	while(t > cnt) {
		arr[cnt] = (arr[cnt-1] + 2 * arr[cnt-2])%10007;
		cnt++;
	}
	cout << arr[t-1];
	
	return 0;
}