#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int all, bomb, hp;
	double ans = 0.0, prob = 1.0;
	
	cin >> all >> bomb >> hp;
	
	if(bomb * 5 < hp) cout << 1;
	else {
		
		int f_bomb = (hp - 1) / 5;
		
		for(int i = 0; i <= f_bomb ; i++) {
			double p = prob * (double)(all - bomb) / (all - i);
			ans += p;
			
			prob *= (double)(bomb - i) / (all - i);
		}
		
		cout << fixed;
		cout.precision(9);
		cout << ans;
		
	}
	
	return 0;
}