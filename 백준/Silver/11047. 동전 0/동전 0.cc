#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n, k, sum = 0;
	stack<int> s;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		s.push(x);
	}
	
	for(int i = 0; i < n; i++){
		sum += k / s.top();
		k %= s.top();
		s.pop();
	}
	cout << sum;
	
	return 0;
}