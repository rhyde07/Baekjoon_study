#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void heap_sort();
void heap_delete();
void swap_two(int a, int b);
vector<pair<int, int>> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n--) {
		int x;
		cin >> x;
		
		if(x != 0) {
			if(x > 0) v.push_back({x, 1});
			else 	  v.push_back({-x, 0});
			heap_sort();
		}
		else {
			if(v.empty()) cout << 0 << "\n";
			else {
				if(v.front().second) cout << v.front().first << "\n";
				else 				 cout << - v.front().first << "\n";

				v[0] = v[v.size() - 1];
				v.pop_back();
				heap_delete();
			}
		}
	}
	
	return 0;
}

void heap_sort() {
	int idx = v.size() - 1;
	
	while(v[idx / 2] > v[idx] && idx > 0) {
		swap_two(idx, idx / 2);
		idx /= 2;
	}
}

void heap_delete() {
	int idx = 1;
	
	while(idx < v.size()) {
		if(idx != v.size() - 1)
			if(v[idx + 1] < v[idx]) idx++;
		
		if(v[idx / 2] > v[idx]) {
			swap_two(idx, idx / 2);
		}
		idx *= 2;
	}
}

void swap_two(int a, int b) {
	auto t = v[a];
	v[a] = v[b];
	v[b] = t;
}