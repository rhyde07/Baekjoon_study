#include <iostream>
#include <cmath>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, sum;
	cin >> n;
	
	while(n--) {
		sum = 0;
		char a;
		
		for(int i = 0; i < 24; i++) {
			cin >> a;
			a -= '0';
			
			if(a == 1) sum += pow(2, 24 - i - 1);
		}
		
		cout << sum << "\n";
	}
	
	return 0;
}