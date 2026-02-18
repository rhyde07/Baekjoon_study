#include <iostream>
using namespace std;
int mem[1000001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	mem[1] = 0;
	mem[2] = 1;
	mem[3] = 1;
	
	for(int i = 4; i <= n; i++){
		mem[i] = mem[i-1] + 1;
		if(i % 2 == 0) {
			if(mem[i] > mem[i/2] + 1) mem[i] = mem[i/2] + 1;
		} 
		if(i % 3 == 0) {
			if(mem[i] > mem[i/3] + 1) mem[i] = mem[i/3] + 1;
		}
	}
	
	
	cout << mem[n] << "\n";
	
	return 0;
}
