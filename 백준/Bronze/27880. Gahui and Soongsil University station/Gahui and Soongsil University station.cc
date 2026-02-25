#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num = 4, sum = 0;
	
	while(num--) {
		int n;
		string l;
		cin >> l >> n;
		if(l == "Es") sum += n * 21;
		else if(l == "Stair") sum += n * 17;
	}
	
	cout << sum;
	
	return 0;
}
 