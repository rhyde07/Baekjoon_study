#include <stdio.h>
#include <string.h>
int a[10000];
int e = -1;

int main(){
	int n, i, num;
	char k[10];
	
	scanf("%d", &n);
	
	while(n > 0){
		scanf("%s", k);
		
		if(strcmp(k, "push") == 0){
			scanf("%d", &i);
			e++;
			a[e] = i;
		}
		
		else if(strcmp(k, "pop") == 0){
			if(e == -1) printf("-1\n");
			else{
				printf("%d\n", a[e]);
				e--;	
			}
		}
		
		else if(strcmp(k, "size") == 0){
			printf("%d\n", e+1);
		}
		
		else if(strcmp(k, "empty") == 0){
			printf("%d\n", !(e+1));
		}
		
		else if(strcmp(k, "top") == 0){
			if(e == -1) printf("-1\n");
			else printf("%d\n", a[e]);
		}
		
		n--;
	}
	
	return 0;
}