#include <stdio.h>
#include <string.h>

int main(){
	char a[10010], b[10010], c[10010];
	int i, add=0;
	scanf("%s %s", a, b);
	
	int la = strlen(a);
	int lb = strlen(b);
	int max = la > lb ? la : lb;
	
	c[max] = '\0';
	
	for(i = 0 ; i < max ; i++)
	{
		int da = (la-i-1) >= 0 ? a[la-1-i]-'0' : 0;
		int db = (lb-i-1) >= 0 ? b[lb-1-i]-'0' : 0;
		int sum = da + db + add;
		c[max-1-i] = sum % 10+ '0';
		add = sum / 10;
	}
	
	if(add) printf("1");
	printf("%s", c);
	return 0;
} 