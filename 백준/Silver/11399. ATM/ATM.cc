#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	sort(v.begin(), v.end());
	
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i * v.back();
		v.pop_back();
	}
	
	cout << sum;
		
	return 0;
}