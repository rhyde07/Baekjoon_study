#include <iostream>
#include <vector>
using namespace std;

long long a[100000];
vector<int> v;
void heap();
void heap_del();

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	v.push_back(0);
	
	while(n--) {
		int x;
		cin >> x;
		
		if(x > 0) {
			v.push_back(x);
			heap();
		}
		
		else if(x == 0) {
			if (v.size() == 1) cout << 0 << "\n";
			else {
				cout << v[1] << "\n";
				v[1] = v[v.size()-1];
				v.pop_back();
				heap_del();
			}
		}
	}
	
	return 0;
}

void heap() {
	int idx = v.size() - 1;
	while(idx >= 2 && v[idx/2] > v[idx]) {
		int t = v[idx/2];
		v[idx/2] = v[idx];
		v[idx] = t;
		
		idx /= 2;
	}
}

void heap_del() {
	int idx = 2;
	
	while(idx <= v.size() - 1) {
		if(idx != v.size() - 1)
			idx = v[idx] < v[idx+1] ? idx : idx+1;
		
		if(v[idx/2] > v[idx]) {
			int t = v[idx/2];
			v[idx/2] = v[idx];
			v[idx] = t;
			idx *= 2;
		}
		else break; 
	}
}
