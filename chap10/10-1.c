#include<stdio.h>

void adjust_point(int *n){
	if(*n < 0){
		*n = 0;
	}
	if(*n > 100){
		*n = 100;
	}
}

int main (void){
	
	int a[5], n, i, j;
	
	for(i = 0; i < 5; i++){
		scanf("%d",&a[i]);
	}
	for(j = 0; j < 5; j++){
		adjust_point(&a[j]);
		printf("%d ", a[j]);
	}
	
	return 0;
}
