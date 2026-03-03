#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int xs, ys, xe, ye, dx, dy, x, y;
	cin >> xs >> ys;
	cin >> xe >> ye >> dx >> dy;
	
	if(dx == 0 && dy == 0) cout << xe << " " << ye;
	else {
		double t = (double)((xs - xe)*dx + (ys - ye)*dy) / ((dx * dx) + (dy * dy));
		if(t < 0) t = 0;
		cout << xe + t*dx << " " << ye + t*dy;
	}
	
	return 0;
}