#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int o, w, status = 2, scene = 1;
	
	while(1) {
		if(status == 2) {
			cin >> o >> w;
			if(o == 0 && w == 0) break;
			status = 1;
		}
		
		else {
			char a;
			int b;
			cin >> a >> b;
			
			if(a == '#') {
				string l;
				if(!status) l = "RIP";
				else {
					if(w > o/2 && w < o*2) l = ":-)";
					else l = ":-(";
				}
				
				cout << scene << " " << l << "\n";
				status = 2; scene++;
			}
			else if(status){
				if(a == 'F') w += b;
				else if(a == 'E') w -= b;
				
				if(w <= 0) status = 0;
			}
		}
	}
	return 0;
}
 