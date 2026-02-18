#include <stdio.h>

int main(){
	int a, b, i;
	scanf("%d %d", &a, &b);
	int min = a < b ? a : b;
	
	for(i=min ; i>=1 ; i--){
		if (a%i==0 && b%i==0) break;
	}
	
	printf("%d\n%d", i, a*b/i);

	return 0;
}