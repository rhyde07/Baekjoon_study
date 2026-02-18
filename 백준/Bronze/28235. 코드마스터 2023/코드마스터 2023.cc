#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string l;
	cin >> l;
	
	if(l == "SONGDO") cout << "HIGHSCHOOL";
	else if(l == "CODE") cout << "MASTER";
	else if(l == "2023") cout << "0611";
	else if(l == "ALGORITHM") cout << "CONTEST";
	
	return 0;
}