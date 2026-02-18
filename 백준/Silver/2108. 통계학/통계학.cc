#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
long long int a[8001]={};  //각 수가 몇번 나왔는지 저장 

int main(){
	int n;
	long long int sum = 0, median = -4001;
	double mean = 0;
	int max = -4001, min = 4001, imax = -1, cnt = 0;
	vector<int> mm;  //최빈값을 넣어줄 벡터
	
	cin >> n;  //개수 입력 
	
	for(int i = 1; i <= n; i++) {  //배열 입력 
		int x;
		cin >> x;
		a[x+4000]++;
	}
	
	for(int i = -4000; i <= 4000; i++) {
		if(a[i+4000] != 0) {
			mean += a[i+4000] * i;  //총합 구하기 
			
			if(max < i) max = i;  //최댓값 
			if(min > i) min = i;  //최솟값 
		}
		
		cnt += a[i+4000];  //지금까지의 숫자 개수 
		if(cnt >= (n+1)/2 && median < -4000) {  //중앙값
			median = i;
		}
		
		if(imax < a[i+4000]) imax = a[i+4000];
	}
	
	for(int i = -4000; i <= 4000; i++) {
		if(a[i+4000] == imax) {
			mm.push_back(i);
		}
	}
	
	mean = round(mean/n);
	if(mean == -0) cout << 0 << "\n";
	else cout << mean << "\n";
	
	cout << median << "\n";
	
	if(mm.size() >=2 ) cout << mm[1] << "\n";
	else cout << mm[0] << "\n";
	
	cout << max - min << "\n";
	
	return 0;
} 
