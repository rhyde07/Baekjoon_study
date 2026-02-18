#include <stdio.h>
int main(){
	int n, i, j, a[60], b[60], c[60] = {0,};
	scanf("%d", &n);
	
	for(i=0 ; i<n ; i++){
		scanf("%d %d", &a[i], &b[i]);
	}
	
	for(i=0 ; i<n ; i++){
		for(j=i+1 ; j<n ; j++){
			if(a[i]>a[j] && b[i]>b[j]){
				c[j]++;
			}
			else if(a[i]<a[j] && b[i]<b[j]){
				c[i]++;
			}
		}
	}
	
	for(i=0 ; i<n ; i++){
		printf("%d ", c[i]+1);
	}
	return 0;
}