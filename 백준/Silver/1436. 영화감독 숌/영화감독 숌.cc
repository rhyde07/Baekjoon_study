#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int n, i = 1, cnt = 0;
	char buffer[100];
	scanf("%d", &n); 
	
	while(1){
		sprintf(buffer, "%d", i);
		if (strstr(buffer, "666") != NULL){
			cnt++;
		}
		
		if(cnt == n) break;
		i++;
	}
	
	printf("%d", i);
	return 0;
}