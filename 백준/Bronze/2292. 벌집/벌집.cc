#include <stdio.h>
int main(){
	long long int a, i = 0;
	scanf("%lld", &a);
	
	if(a == 1) printf("1");
	else{
		while(1){
			if( 3*i*(i+1) + 1 >= a ){
				printf("%lld", i+1);
				break;
			} 
			else i++;
		}
	}
	
	return 0;
}
 