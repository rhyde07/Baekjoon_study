#include <stdio.h>
#include <string.h>

int main() {
    char a[10010], b[10010], c[10011];
    scanf("%s %s", a, b);

    int i, j, add = 0;
    int max = strlen(a) > strlen(b) ? strlen(a) : strlen(b);

	c[max] = '\0'; // 마지막에 널 문자 추가(이런)
	
    for(i = 0; i < max; i++)
	{
        int da = i < strlen(a) ? a[strlen(a)-1-i]-'0' : 0;
        int db = i < strlen(b) ? b[strlen(b)-1-i]-'0' : 0;

        int sum = da + db + add;
        c[max-1-i] = (sum % 10) + '0';
        add = sum/10;
    }

    if(add){
        printf("1");
    }
    printf("%s", c);
}