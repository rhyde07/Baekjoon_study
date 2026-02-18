#include <stdio.h>
int main(){
	int a, b, v, left;
	scanf("%d %d %d", &a, &b, &v);
	
	if(v <= a) left = 1;
	else if((v-a) % (a-b) != 0) left = (v-a) / (a-b) + 2;
	else left = (v-a) / (a-b) + 1;
	
	printf("%d", left);
	
	return 0;
}