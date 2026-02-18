#include <stdio.h>
int main(){
	int n, i, j, a, arr[10010]={0,};
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a);
		arr[a]++;
	}
	
	for(i=1;i<=10000;i++)
		for(j=0;j<arr[i];j++)
			printf("%d\n", i);
	
	return 0;
}