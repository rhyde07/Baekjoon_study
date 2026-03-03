#include <iostream>
#include <cmath>
using namespace std;
int f(int i, int j, int n);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, n;
	cin >> n >> a >> b;
	
	n = pow(2, n);
	cout << f(a + 1, b + 1, n);
	
	return 0;
}

int f(int i, int j, int n) {
	if(n % 2 != 0) return 0;
	int n_2 = pow(n / 2 , 2);
	
	if(n / 2 >= i && n / 2 >= j)	 return f(i, j, n/2);
	else if(n / 2 >= i && n / 2 < j) return f(i, j - n/2, n/2) + n_2;
	else if(n / 2 < i && n / 2 >= j) return f(i - n/2, j, n/2) + n_2 * 2;
	else 							 return f(i - n/2, j - n/2, n/2) + n_2 * 3;
}