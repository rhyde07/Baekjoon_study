#include <stdio.h>
#include <string.h>

int main() {
	char s[1000001];
	int res = 1;

	scanf("%[^\n]", s);
	int ls = strlen(s);
	if (ls == 1 && s[0] == ' ') {
		printf("0");
		return 0;
	}

	for (int i = 1; i < ls - 1; i++) {
		if (s[i] == ' ') res++;
	}

	printf("%d", res);

	return 0;
}