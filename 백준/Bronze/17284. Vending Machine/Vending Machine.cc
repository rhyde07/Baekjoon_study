#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, sum = 0;;
	
	while(cin >> n) {
		if(n == 1) sum += 500;
		else if(n == 2) sum += 800;
		else if(n == 3) sum += 1000;
	}
	
	cout << 5000 - sum;
	
	return 0;
}