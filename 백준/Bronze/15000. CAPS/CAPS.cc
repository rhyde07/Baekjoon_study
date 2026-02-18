#include <stdio.h>
int main(){
    char a;
    while(1){
    	scanf("%c", &a);
		if(a == '\n') break;
		printf("%c", a-32);
    }
    
    return 0;
}