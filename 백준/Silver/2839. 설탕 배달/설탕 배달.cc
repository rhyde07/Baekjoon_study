#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	
	int cnt5 = 0, cnt3 = 0, num = n, sum = n;

	for(i=0 ; i<=n/5 ; i++){
		if(num%3 == 0) {
				cnt5 = i;
				cnt3 = num/3;
			if(sum > cnt5 + cnt3) sum = cnt5 + cnt3;
		}
		num -= 5;
	}
	
	if(cnt5 == 0 && cnt3 == 0) printf("-1");
	else printf("%d", cnt5 + cnt3);
	
	return 0;
}