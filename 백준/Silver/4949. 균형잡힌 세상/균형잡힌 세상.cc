#include <stdio.h>
#include <string.h>

int main(){
	int i, check;
	char a[101]={}, b[101]={};
	while(1){
		check = 0;
		scanf("%[^\n]", a);
		getchar(); // '\n' 제거
		
		if(strcmp(a, ".") == 0) break;
		int l = strlen(a);
		
		for(i=0 ; i<l ; i++){
			if(a[i] == '['){
				b[check] = '[';
				check++;
			}
			else if(a[i] == ']'){
				if(check == 0 || b[check-1] != '['){
					printf("no\n");
					break;
				}
				else check--;
			}
			else if(a[i] == '('){
				b[check] = '(';
				check++;
			}
			else if(a[i] == ')'){
				if(check == 0 || b[check-1] != '(' ){
					printf("no\n");
					break;
				}
				else check--;
			}
			
			if(a[i] == '.'){
				if(check==0) printf("yes\n");
				else printf("no\n");
			}
			
		}
	}
		
	
	return 0;
} 