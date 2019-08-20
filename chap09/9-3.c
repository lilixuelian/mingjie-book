#include <stdio.h>

#define NUMBER 5

int main (void){
	
	int i, j = 0;
	char s[NUMBER][128];
	
	for(i = 0; i < NUMBER; i++){
		printf("s[%d]", i);
		scanf("%s", &s[i]);
		if(strcmp(s[i], "$$$$$") == 0){
			break;
		}
		j++;
	}
	
	for(i = 0; i < j; i++){
		printf("%s\n", s[i]);
	}
	
	
	
	return 0;
}
