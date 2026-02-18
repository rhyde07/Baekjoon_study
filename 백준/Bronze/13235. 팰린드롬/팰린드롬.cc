#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> v1, v2;

int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	
	string l1;
	cin >> l1;
	
	int l = l1.length();
	for(int i = 0; i < l; i++) {
		v1.push_back(l1[l-i-1]);
		v2.push_back(l1[i]);
	}
	
	int check = 1;
	for(int i = 0; i < l; i++) {
		if(v1[i] != v2[i]) check = 0;
	}
	
	if(check) cout << "true";
	else cout << "false";
	
	
	
	return 0;
}