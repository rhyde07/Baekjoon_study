#include <stdio.h>
#include <string.h>

int a[100000];
int s = -1, e = -1;

int main(){
	char k[10];
	int n, i;
	scanf("%d", &n);
	
	while(n > 0){
		scanf("%s", &k);
		
		if(strcmp(k, "push") == 0){
			scanf("%d", &i);
			
			e++;
			if(e >= 100000){
				int size = e-s;
				for(i=s+1 ; i<=e ; i++){
					a[i-s-1] = a[i];
				}
				s=-1; e=size-1;
			}
			a[e] = i;
		}
		
		else if(strcmp(k, "pop") == 0){
			scanf("%d", &i);
			
			if(!(e-s) == 0){
				printf("%d\n", a[s+1]);
				s++;
				
				if(s == e){
					s=-1; e=-1;
				}
			}
			else printf("-1\n");
		}
		
		else if(strcmp(k, "size") == 0){
			printf("%d\n", e-s);
		}
		
		else if(strcmp(k, "empty") == 0){
			printf("%d\n", !(e-s));
		}
		
		else if(strcmp(k, "back") == 0){
			if(!(e-s) == 0) printf("%d\n", a[e]);
			else printf("-1\n");
		}
		
		else if(strcmp(k, "front") == 0){
			if(!(e-s) == 0) printf("%d\n", a[s+1]);
			else printf("-1\n");
		}
		
		n--;
	}	
}