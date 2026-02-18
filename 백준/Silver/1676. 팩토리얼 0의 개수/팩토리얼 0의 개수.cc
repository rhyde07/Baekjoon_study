#include <stdio.h>
int f2(int n, int cnt){
	if(n % 2 == 0) return f2(n/2, cnt+1);
	else return cnt;
}

int f5(int n, int cnt){
	if(n % 5 == 0) return f5(n/5, cnt+1);
	else return cnt;
}

int main(){
	int n, i;
	scanf("%d", &n);
	
	int cnt5 = 0, cnt2 = 0;
	
	for(i=2 ; i<=n ; i++){
		cnt5 += f5(i, 0);
		cnt2 += f2(i, 0);
	}
	
	int a = cnt2 < cnt5 ? cnt2 : cnt5;
	printf("%d", a);
	return 0;
}