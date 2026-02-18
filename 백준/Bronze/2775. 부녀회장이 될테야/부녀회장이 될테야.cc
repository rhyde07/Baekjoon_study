#include <stdio.h>
int main(){
	int a, i, j, k, arr[15][16];
	scanf("%d", &a);
	
	for(i=0 ; i<15 ; i++){
		for(j=1 ; j<=15 ; j++){
			if(i==0) arr[i][j] = j;
			else {
				int sum = 0;
				for(k=j ; k>0 ; k--){
					sum += arr[i-1][k];
				}
				arr[i][j] = sum;
			}
		}
	}
	
	for(i=0 ; i<a ; i++){
		int k, n;
		scanf("%d", &k);
		scanf("%d", &n);
		
		printf("%d\n", arr[k][n]);
		
	}
	
	return 0;
}
