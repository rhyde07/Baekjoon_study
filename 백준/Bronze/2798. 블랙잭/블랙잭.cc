#include <stdio.h>
int main(){
	int n, m, i, j, k;
	int arr[110] = {0, };
	
	scanf("%d %d", &n, &m);
	
	for(i=0 ; i<n ; i++){
		scanf("%d", &arr[i]);
	}
	
	int max = 0;
	int mini = m;
	int sum = 0;
	
	for(i=0 ; i<n-2 ; i++){
		for(j=i+1 ; j<n-1 ; j++){
			for(k=j+1 ; k<n ; k++){
			sum = arr[i] + arr[j] + arr[k];
				if(sum <= m){
					if(m-sum < mini){
						mini = m-sum;
						max = sum;
					}
				}
			}
		}
	
	}
	printf("%d", max);
	
	return 0;
}

