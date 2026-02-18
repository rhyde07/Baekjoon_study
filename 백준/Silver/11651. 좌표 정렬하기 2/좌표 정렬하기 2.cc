#include <stdio.h>
typedef struct st{
	int x;
	int y;
} make;

make t, a[100010];

void QuickSort(make *a, int left, int right){
	make pivot = a[(left + right) / 2];
	int l = left, r = right;
	
	while(l <= r){
		while(a[l].y < pivot.y || a[l].y == pivot.y && a[l].x < pivot.x ) l++;
		while(a[r].y > pivot.y || a[r].y == pivot.y && a[r].x > pivot.x ) r--;
		
		if(l <= r){
			if(l != r){
				t = a[l];
				a[l] = a[r];
				a[r] = t;
			}
			l++; r--;
		}
	}
	if(l < right) QuickSort(a, l, right);
	if(left < r) QuickSort(a, left, r);
}

int main(){
	int n, i;
	scanf("%d", &n);
	
	
	for(i=0 ; i<n ; i++){
		scanf("%d %d", &a[i].x, &a[i].y);
	}
	
	QuickSort(a, 0, n-1);
	
	for(i=0 ; i<n ; i++){
		printf("%d %d\n", a[i].x, a[i].y);
	}
	
	return 0;
} 