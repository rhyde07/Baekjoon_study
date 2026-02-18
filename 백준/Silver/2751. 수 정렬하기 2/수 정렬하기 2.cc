#include <stdio.h>

int arr[2][10001][100] = {0,};

int main(){
	int n, i, a, j;
	scanf("%d", &n);
	
	for(i=0 ; i<n ; i++){
		scanf("%d", &a);
		if(a<0){
			a = -a;
			arr[0][ a/100 ][ a%100 ] = 1;
		}
		else arr[1][ a/100 ][ a%100 ] = 1;
	}
	
	for(i = 10000 ; i >= 0 ; i--){
		for(j = 99 ; j >= 0 ; j--){
			if(arr[0][i][j] == 1){
				printf("%d\n", -1*i*100-j);
			}
		}
	}

	for(i = 0 ; i <= 10000 ; i++){
		for(j = 0 ; j < 100 ; j++){
			if(arr[1][i][j] == 1){
				printf("%d\n", i*100+j);
			}
		}
	}
	
	return 0;
}