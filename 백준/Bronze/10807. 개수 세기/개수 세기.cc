#include <stdio.h>
int main(){
	int a[110];
	int n, m, i, count=0;
	
	scanf("%d", &n);
	for(i=0 ; i<n ; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	
	for(i=0 ; i<n ; i++){
		if(a[i]==m){
			count++;
		}
	}
	printf("%d", count);
}