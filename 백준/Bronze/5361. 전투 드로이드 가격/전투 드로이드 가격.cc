#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	double n, a, b, c, d, e, sum;
	
	cin >> n;
	
	while(n > 0) {
		sum = 0;
		cin >> a >> b >> c >> d >> e;
		sum += a * 350.34;
		sum += b * 230.90;
		sum += c * 190.55;
		sum += d * 125.30;
		sum += e * 180.90;
	
		cout << "$" <<fixed << setprecision(2) << sum << "\n";
		n--;
	}
	
	return 0;
}
