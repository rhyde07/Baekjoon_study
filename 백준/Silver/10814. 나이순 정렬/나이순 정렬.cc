//10814
#include <stdio.h>

typedef struct {
	int age;
	char name[101];
} make;

make t;
make a[100010];
int num[201];

int main(){
	int n, i, j;
	scanf("%d", &n);
	
	for(i=0 ; i<n ; i++){
		scanf("%d %s", &a[i].age, a[i].name);
		num[a[i].age]++;
	}
	
	for(i=1 ; i<=200 ; i++){
		for(j=0 ; j<n ; j++){
			if (num[i] != 0 && a[j].age == i){
				printf("%d %s\n", a[j].age, a[j].name);
			}
		}
	}
	return 0;
}
 