#include<stdio.h>

void null_string(char s[]){
	
	s[0] = '\0';
	
}

int main (void){
	
	char s[] = "ABC";
	
	printf("begin:%s\n", s);
	
	null_string(s);
	
	printf("end:%s\n", s);
	
	return 0;
} 
