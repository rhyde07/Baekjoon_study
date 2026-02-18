#include <stdio.h>
int main(){
	int n, i, max = -1000001, min = 1000001;
	
	scanf("%d", &n);
	for(i = 0 ; i < n ; i++){
		int a;
		scanf("%d", &a);
		if(a>max) max = a;
		if(a<min) min = a;
	}
	
	printf("%d %d", min, max);
	
	return 0;
}