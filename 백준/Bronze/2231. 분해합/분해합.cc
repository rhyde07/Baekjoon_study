#include <stdio.h>
int sum;
int f(int a, int k){
	if(k == 0) return sum;
	
	else {
		sum += a%10;
		return f(a/10, k-1);
	}
}

int main(){
	int a, i, min = -1;
	scanf("%d", &a);
	
	for(i=1 ; i<a ; i++){
		sum = 0;
		if((f(i, 7) + i) == a) {
			min = i;
			break;
		}
	}
	
	if(min != -1) printf("%d", min);
	else printf("0");
	
	
	return 0;
}