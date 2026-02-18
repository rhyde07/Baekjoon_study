#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	
	char n;
	cin >> n;
	if(n == 'M') {
		cout << "MatKor";
	}
	
	else if(n == 'W') {
		cout << "WiCys";
	}
	
	else if(n == 'C') {
		cout << "CyKor";
	}
	
	else if(n == 'A') {
		cout << "AlKor";
	}
	
	else if(n == '$') {
		cout << "$clear";
	}
	
	return 0;
}