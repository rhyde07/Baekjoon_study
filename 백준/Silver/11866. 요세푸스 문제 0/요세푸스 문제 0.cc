#include <stdio.h>
int main(){
	int num, idx, a[1001]={};
	scanf("%d %d", &num, &idx);
	
	int i, Lidx = 0, cnt, b;
	//Lidx: 마지막 위치, b: 스킵 개수, cnt: "실제" 스킵 개수
	
	printf("<");
	
	for(i = 0 ; i<num ; i++){
		b = 0; cnt = 0;
		
		while(b < idx){
			cnt++;
			if(a[(Lidx+cnt) % num] == 0) b++;
		}
		
		Lidx = (Lidx + cnt) % num;
		
		if(Lidx == 0) printf("%d", num);
		else printf("%d", Lidx);
		if(i != num-1) printf(", ");
		
		a[Lidx] = 1;
	}
	printf(">");
	
	return 0;
}