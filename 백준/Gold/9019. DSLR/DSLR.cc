#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int qtn, ans;

int D(int num);
int S(int num);
int Pushing(int num, char a);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n--) {
		int visited[10000] = {};
		queue<pair<int, string>> q;
		
		cin >> qtn >> ans;
		q.push({qtn, ""});
		visited[qtn] = 1;
		
		while(1) {
			int num = q.front().first;
			string l = q.front().second;
			
			if(num == ans) {
				cout << l << "\n";
				break;
			}
			q.pop();
			
			int guess[4] = { D(num), S(num), Pushing(num, 'L'), Pushing(num, 'R') };
			char letters[4] = {'D', 'S', 'L', 'R'};
			
			for(int i = 0; i < 4; i++) {
				if(visited[guess[i]] == 0) {
					q.push( {guess[i], l + letters[i]} );
					visited[guess[i]] = 1;
				}
			}
		}
	}
	
	return 0;
}

int D(int num) {
	return (num * 2) % 10000;
}

int S(int num) {
	int k = num - 1;
	
	if(k < 0) return 9999;
	else 	  return k;
}

int Pushing(int num, char a) {
	int d1 = num / 1000;
	num %= 1000;
	int d2 = num / 100;
	num %= 100;
	int d3 = num / 10;
	int d4 = num % 10;
	
	if(a == 'L') {
		int k = d1;
		d1 = d2;
		d2 = d3;
		d3 = d4;
		d4 = k;
	}
	else {
		int k = d4;
		d4 = d3;
		d3 = d2;
		d2 = d1;
		d1 = k;
	}
	
	return d1*1000 + d2*100 + d3*10 + d4;
}
