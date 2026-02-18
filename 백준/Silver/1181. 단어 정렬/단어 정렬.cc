#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int f(const void *p1, const void *p2){
	const char *a = (const char *)p1;
	const char *b = (const char *)p2;
	
	int A = strlen(a);
	int B = strlen(b);
	
	if (strlen(a) == strlen(b)) return strcmp(a,b);
	else return strlen(a) - strlen(b);
}

int main(){
	int n, i, j;
	char a[20010][100];
	scanf("%d", &n);
	for(i=0 ; i<n ; i++){
		scanf("%s", a[i]);
	}
	
	qsort(a, n, sizeof(a[0]), f);
	
	for(i=0;i<n;i++)
		if(strcmp(a[i],a[i-1]) != 0) 
			printf("%s\n", a[i]);
	
	return 0;
}