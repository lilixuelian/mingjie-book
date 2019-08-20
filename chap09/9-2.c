#include<stdio.h>

int main (void){
	
	char s[] = "ABC";
	int i;
	
	for(i = 0; i < 3; i++){
		s[i] = 0;
	}
	
	printf("%s", s);
	
	return 0;
} 
