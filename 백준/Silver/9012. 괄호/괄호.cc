#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char b[51];
	scanf("%d", &n);
	
	while(n > 0){
		scanf("%s", b);
		int l = strlen(b);
		int i, stack = 0;
		
		for(i=0 ; i<l ; i++){
			if(stack < 0){
				printf("NO\n");
				break;
			}
			if (b[i] == '(') stack++;
			else if (b[i] == ')') stack--;
			
			if(i == l-1 && stack == 0) printf("YES\n");
			else if(i == l-1) printf("NO\n");
		}
		n--;
	}
	
	return 0;
}