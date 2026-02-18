#include <stdio.h>
int main(){
	int i, j, x, y, n, m;
	char a[51][51];
	scanf("%d %d", &n, &m);
	
	char ans1[8][8], ans2[8][8];
	
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if((i+j)%2 != 0) ans1[i][j] = 'W';
			else ans1[i][j] = 'B';
		}
	}
	
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if((i+j)%2 == 0) ans2[i][j] = 'W';
			else ans2[i][j] = 'B';
		}
	}
	
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<m ; j++){
			scanf(" %c", &a[i][j]);
		}
	}
	
	int chk1 = 64, chk2 = 64;
	for(i=0 ; i<=n-8 ; i++){
		for(j=0 ; j<=m-8 ; j++){
			int a1 = 0, a2 = 0;
			for(x=0 ; x<8 ; x++){
				for(y=0 ; y<8 ; y++){
					if(a[i+x][j+y] != ans1[x][y]) a1++;
					if(a[i+x][j+y] != ans2[x][y]) a2++;
				}
			}
			if(a1 < chk1) chk1 = a1;
			if(a2 < chk2) chk2 = a2;
		}
	}
	int cnt = chk1 < chk2 ? chk1 : chk2;
	printf("%d", cnt);
	
	return 0;
} 