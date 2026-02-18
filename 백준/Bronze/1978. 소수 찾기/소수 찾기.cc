#include <stdio.h>
int main(){
	int n, i, j, k, flag = 1, count=0;
	scanf("%d", &n);
	
	for(i=0 ; i<n ; i++){
		flag = 1;
		scanf("%d", &k);
		
		if(k==1) continue;

		flag = 0;
		for(j = 2 ; j*j<=k ; j++){
			if(k % j == 0){
				flag = 1;
				break;
			}
		}

		if(flag == 0) count++;
	}
	
	printf("%d", count);
	
	
	return 0;
}