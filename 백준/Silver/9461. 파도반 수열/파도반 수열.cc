#include <iostream>
using namespace std;
long long arr[100] = {1, 1, 1, 2, 2,};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n > 0) {
		int t;
		cin >> t;
		
		int cnt = 0;
		while (cnt < t) {
			if(arr[cnt] == 0) {
				arr[cnt] = arr[cnt-1] + arr[cnt-5];
			}
			cnt++;
		}
		cout << arr[t-1] << "\n";
		n--;
	}
	return 0;
}
