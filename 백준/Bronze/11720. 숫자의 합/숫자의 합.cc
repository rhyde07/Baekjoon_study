#include <stdio.h>
int main(){
	int n, i, sum = 0;
	char k[110];
	
	scanf("%d", &n);
	scanf("%s", &k);
	
	for(i = 0 ; i < n ; i++){
		sum += k[i]-'0';
	}
	printf("%d", sum);
}