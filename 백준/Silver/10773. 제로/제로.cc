#include <stdio.h>
#include <stdbool.h>

int top = -1;
long long int arr[100010] = {0, };

int IsEmpty(){
	if(top < 0) return true;
	else return false;
}

int IsFull(){
	if(top < 100009) return false;
	else return true;
}

int pop(){
	if(IsEmpty() == false) return arr[top--];
}

void push(int value){
	if(IsFull() == false) arr[++top] = value;
}

int main(){
	long long int i, n, a, sum = 0;

	scanf("%lld", &n);
	for(i=0 ; i<n ; i++){
		scanf("%lld", &a);
		
		if(a == 0) {
			sum -= arr[top];
			pop();
		}
		
		else {
			push(a);
			sum += arr[top];
		}
	}
	printf("%lld", sum);
	return 0;
}