#include <stdio.h>
#include <string.h>
int main(){
	int a, i;
	scanf("%d", &a);
	
	for(i=0;i<a;i++){
		char s[1010];
		scanf("%s", s);
		printf("%c%c\n", s[0], s[strlen(s)-1]);
	}
	
	return 0;
}