#include <stdio.h>
#define MAX 500010

int a[MAX], s=0, e=0;
void push(int size, int n){
	a[e%size] = n;
	e++;
}

void pop(){
	s++;
}

int main(){
	
	int n, i, chk = 0;
	scanf("%d", &n);
	
	for(i=0 ; i<n ; i++){
		a[e%MAX] = i+1;
		e++;
	}
	
	while(e-s> 1){
		if(chk % 2 == 0) pop();
		else{
			int t = a[s%MAX];
			pop();
			push(MAX, t);
		}
		chk++;
	}
	
	printf("%d", a[s%MAX]);
	
	
	
	return 0;
}