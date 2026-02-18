//제발 
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
 
int main(){
	int n, check = 0, cnt = 1;
	cin >> n;
	stack<int> a;
	queue<char> b;
	
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		
		if(check == 1) continue;
		
		while(cnt <= x){		
				b.push('+');
				a.push(cnt++);
		}
		
		if(!a.empty() && a.top() == x) { 
			a.pop();
			b.push('-');
		}
		
		else check = 1;
	}
	
	if(check == 0) {
		long long int s = b.size();
		for(long long int i = 0; i < s; i++){
			cout << b.front() << "\n";
			b.pop();
		}
	}
	else cout << "NO";
	
	return 0;
}