#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1) {
		string l;
		cin >> l;
		
		if(l == "end") break;
		else if(l == "animal")	   cout << "Panthera tigris\n";
		else if(l == "tree")   cout << "Pinus densiflora\n";
		else if(l == "flower") cout << "Forsythia koreana\n";
	}
	
	return 0;
}