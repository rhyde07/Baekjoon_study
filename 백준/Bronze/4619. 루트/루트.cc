#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int b, n;
    while(1) {
        cin >> b >> n;
        if(b == 0 && n == 0) break;
        
        int m = 1000001;
        int a = pow(b, 1.0/n);
        double num1 = pow(a, n) - b;
        double num2 = pow(a+1, n) - b;
        
        if(m > abs(num1)) {
            m = abs(num1);
        } 
        if(m > abs(num2)) {
            m = abs(num2);
            a += 1;
        }
        cout << a << "\n";
    }
    
    return 0;
}