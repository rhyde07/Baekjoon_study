#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

unordered_map<string, int> m1;
vector<string> v;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		string l;
		cin >> l;
		m1.insert({l, 1});
	}
	
	for(int i = 0; i < m; i++){
		string l;
		cin >> l;
		if(m1.find(l) != m1.end()) v.push_back(l);
	}
	
	sort(v.begin(), v.end());
	
	cout << v.size() << "\n";
	for(int i = 0; i < v.size(); i++) cout << v[i] << "\n";
	
	return 0;
}