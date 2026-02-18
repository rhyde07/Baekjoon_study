#include <stdio.h>
#include <math.h>

int main(){
	int x1, x2, y1, y2, r1, r2;
	int n, i;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		//무한대인 경우 : 모두 일치 
		int dis = pow(x1-x2,2) + pow(y1-y2,2);
		if (x1==x2 && y1==y2 && r1==r2) printf("-1\n");
		
		//두 중심 사이 거리가 반지름 합보다 작음 
		else if (dis<pow(r1+r2, 2) && dis>pow(r1-r2, 2)) printf("2\n");

		//두 중심 사이 거리가 반지름 합과 같음 
		else if (dis==pow(r1+r2, 2) || dis==pow(r1-r2, 2)) printf("1\n");

		else printf("0\n");
	}
	
	
	return 0;
	
}
