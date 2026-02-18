#include <stdio.h>
typedef struct st{
	int x;
	int y;
} make;

make a[100010], t;

void QuickSort(make *a, int left, int right){
	int l = left, r = right;
	make pivot = a[(left + right) / 2];
	
	while(l <= r){
		while(a[l].x < pivot.x || a[l].x == pivot.x && a[l].y < pivot.y) l++;
		while(a[r].x > pivot.x || a[r].x == pivot.x && a[r].y > pivot.y) r--;
		if(l <= r){
			if(l != r){
				t = a[l];
				a[l] = a[r];
				a[r] = t;
			}
			l++; r--;
		}
	}
	if(left < r) QuickSort(a, left, r);
	if(l < right) QuickSort(a, l, right);
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