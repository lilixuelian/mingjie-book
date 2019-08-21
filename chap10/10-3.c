#include<stdio.h>

void change(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int *n1, int *n2, int *n3){
	if(*n2 < *n1){
		change(n2, n1);
	}
	if(*n3 < *n1){
		change(n3, n1);
	}
	if(*n3 < *n2){
		change(n3, n2);
	}
}
 
int main (void){
	
	int n1, n2, n3;
	
	scanf("%d %d %d", &n1, &n2, &n3);
	
	sort(&n1, &n2, &n3);
	
	printf("%d %d %d", n1, n2, n3);
	
	return 0;
}
