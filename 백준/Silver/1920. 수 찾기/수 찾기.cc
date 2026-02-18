#include <stdio.h>
int a[100010], t;

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

int binarySearch(int *a, int num, int s, int e){
	int mid = (s + e) / 2;

	if(s>e) return 0;
	else if(a[mid] > num) return binarySearch(a, num, s, mid-1);
	else if(a[mid] < num) return binarySearch(a, num, mid+1, e);
	else if(a[mid] == num) return 1;
	else return 0;
}

int main(){
	int n, i, n1;
	scanf("%d", &n);
	
	for(i=0 ; i<n ; i++){
		scanf("%d", &a[i]);
	}
	
	QuickSort(a, 0, n-1);
	
	scanf("%d", &n1);
	
	for(i=0 ; i<n1 ; i++){
		scanf("%d", &t);
		printf("%d\n", binarySearch(a, t, 0, n-1));
	}
	
	return 0;
} 