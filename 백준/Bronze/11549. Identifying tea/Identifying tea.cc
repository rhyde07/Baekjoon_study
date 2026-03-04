#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, sum = 0;
	cin >> n;
	
	for(int i = 0; i < 5; i++) {
		int t;
		cin >> t;
		
		if(t == n) sum++;
	}
	cout << sum;
	
	return 0;
}