#include <stdio.h>
//sort를 모두 풀어써보아요^^
int t, a[500001];
int low, high;

void lowbs(int *a, int n, int s, int e){
	int mid = (s + e) / 2;
	if(s <= e) {
		if(n == a[mid]){
			low = mid;
			lowbs(a, n, s, mid-1);
		}
		else if(n < a[mid]) lowbs(a, n, s, mid-1);
		else if(n > a[mid]) lowbs(a, n, mid+1, e);
	}
	
}

void highbs(int *a, int n, int s, int e){
	int mid = (s + e) / 2;
	if(s <= e){
		if(n == a[mid]){
			high = mid;
			highbs(a, n, mid+1, e);
		}
		else if(n < a[mid]) highbs(a, n, s, mid-1);
		else if(n > a[mid]) highbs(a, n, mid+1, e);
	}
}

void QuickSort(int *a, int left, int right){
	int pivot = a[(left + right) / 2];
	int l = left, r = right;
	
	while(l <= r){
		while(a[l] < pivot) l++;
		while(a[r] > pivot) r--;
		
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
	int n, m, i, j;
	
	scanf("%d", &n);
	for(i=0 ; i<n ; i++){
		scanf("%d", &a[i]);
	}
	
	QuickSort(a, 0, n-1);
	
	scanf("%d", &m);
	
	for(i=0 ; i<m ; i++){
		scanf("%d", &j);
		low = -1; high = -1;
		highbs(a, j, 0, n-1); lowbs(a, j, 0, n-1);
		
		int cnt;
		if(low == -1) cnt = 0;
		else cnt = high - low + 1;
		printf("%d ", cnt);
	}
	
	return 0;
} 
