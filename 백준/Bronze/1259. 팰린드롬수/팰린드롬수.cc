#include <stdio.h>
#include <string.h>

int main(){
	char a[100010];
	int i; 
	while(1){
		scanf("%s", a);
		if(strcmp(a, "0") == 0) break;
		
		else {
			for(i=0 ; i<strlen(a) ; i++){
				if(a[i] != a[strlen(a)-i-1]) {
					printf("no\n");
					break;
				}
				else if(i >= strlen(a)/2){
					printf("yes\n");
					break;
				}
			}

		}
	}
	
	return 0;
}