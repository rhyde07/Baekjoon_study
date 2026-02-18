#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    
    int b1 = b;
    for(int i = 0; i < 3; i++){
        int t = b1 % 10;
        b1 /= 10;
        cout << a*t << "\n";
    }
    cout << a*b;
    
    return 0;
}