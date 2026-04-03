#include <iostream>
using namespace std;
int arr[30];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i = 1; i <= 28; i++) {
		int a;
		cin >> a;
		arr[a] = 1;
	}
	
	for(int i = 1; i <= 30; i++) {
		if(arr[i] == 0) cout << i << "\n";
	}
	
	return 0;
}