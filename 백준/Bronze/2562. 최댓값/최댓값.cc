#include <stdio.h>
int main(){
	int a[10], b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;
	
	for(i=0;i<9;i++){
		scanf("%d", &a[i]);
	}
	for(i = 0 ; i < 8 ; i++){
		if(a[i] > a[i+1]){
			int t = a[i];
			a[i] = a[i+1];
			a[i+1] = t;
			
			t = b[i];
			b[i] = b[i+1];
			b[i+1] = t;
		}
	}
	printf("%d\n%d", a[8], b[8]);
}