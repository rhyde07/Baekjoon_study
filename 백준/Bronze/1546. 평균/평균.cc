#include <stdio.h>
int main(){
	int i;
	double arr[1010], n, avg = 0, max = 0;
	
	scanf("%lf", &n);
	for(i=0 ; i<n ; i++){
		scanf("%lf", &arr[i]);
		avg += arr[i];
		if (max < arr[i]) max = arr[i];
	}
	
	printf("%.2lf", avg/n/max*100);
	
	return 0;
}