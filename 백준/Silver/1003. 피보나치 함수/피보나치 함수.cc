#include <iostream>
#include <map>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	while(n--) {
		int sum[41][2] = {};
		sum[0][0] = 1;
		sum[0][1] = 0;
		sum[1][0] = 0;
		sum[1][1] = 1;
		
		int a;
		cin >> a;
		
		int i = 2;
		while(i <= a){
			if(sum[i][0] == 0) {
				sum[i][0] = sum[i-1][0] + sum[i-2][0];
				sum[i][1] = sum[i-1][1] + sum[i-2][1];
				i++;
			}
		}
		cout << sum[a][0] << " " << sum[a][1] << "\n";
	}
	return 0;
}
