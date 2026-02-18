#include <stdio.h>
int main(){
	int n, i, j, z;
	scanf("%d", &n);
	
	for(i = 0 ; i < n ; i++){
		int a;
		char b[30];
		scanf("%d %s", &a, b);
		
		for(z = 0 ; b[z] != '\0' ; z++){
			for(j = 0 ; j < a ; j++) printf("%c", b[z]);
		}
		
		printf("\n");
	}
}