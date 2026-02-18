#include <stdio.h>
#include <string.h>
int t, ball[5] = {0,1,0,0,2};

void swap(int n, int m){
	t = ball[n];
	ball[n] = ball[m];
	ball[m] = t;
}

int main(){
	char a[201];
	int cnt = 0, i;

	scanf("%s", a);
	int l = strlen(a);
	
	while(cnt < l){
		if(a[cnt] == 'A') swap(1, 2);
		else if(a[cnt] == 'B') swap(1, 3);
		else if(a[cnt] == 'C') swap(1, 4);
		else if(a[cnt] == 'D') swap(2, 3);
		else if(a[cnt] == 'E') swap(2, 4);
		else if(a[cnt] == 'F') swap(3, 4);
		cnt++;
	}
	
	for(i=1 ; i<=4 ; i++){
		if(ball[i] == 1) printf("%d\n", i);
	}
	for(i=1 ; i<=4 ; i++){
		if(ball[i] == 2) printf("%d", i);
	}
	
	return 0;
}