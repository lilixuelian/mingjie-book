#include<stdio.h>

void null_string(char s[]){
	s[0] = '\0'	;
}

int main (void){
	
	char s[] = "abcdef";
	printf("%s", s);
	
	null_string(s);
	printf("%s", s);
	
	return 0;
}
