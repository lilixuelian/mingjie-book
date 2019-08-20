#include<stdio.h>

void rev_string(char s[][128], int n){
	int i, j;
	
	for(i = n; i >= 0; i--){
		for(j = sizeof(s[i]); j >= 0; j--){
			putchar(s[i][j]);
		}
		printf("\n");
	}
}

int main (void){
	
	char s[][128] = {"abcd", "ef", "123", "456789"};
	int n = 0, i = 0;
	
	while(s[i][0] != '\0'){
		n++;
		i++;
	}
	
//	while(s[i][0] != '\0'){
//		n++;
//		i++;
//	}
	printf("%d", n);
	
//	rev_string(s, n);
	
	return 0;
}
