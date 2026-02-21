//OneRepublic Seoul 260223 Q^0^Q

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int n, m, b;
	int inven, cnt = 0, time;
	int ans_time = 128000000, ans_cnt = -1;
	
	cin >> n >> m >> b;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			int t;
			cin >> t;
			v.push_back(t);
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	
	while(cnt <= 256) {
		inven = b, time = 0;
		int check = 0;
		
		for(int i = 0; i < n*m; i++) {
			if(cnt < v[i]) {
				int t = v[i] - cnt;
				inven += t;
				time += 2 * t;
			}
			else if(cnt > v[i]) {
				int t = cnt - v[i];
				inven -= t;
				if(inven < 0) check = 1;
				time += t;
			}
		}
		
		if(!check && inven >= 0 && time <= ans_time && ans_cnt < cnt) {
			ans_cnt = cnt;
			ans_time = time;
		}
		cnt++;
	}
	
	cout << ans_time << " " << ans_cnt;
	
	return 0;
}
