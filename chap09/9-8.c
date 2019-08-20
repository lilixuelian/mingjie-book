#include<stdio.h>

void put_stringr(const char s[]){
	int i;
	for(i = (sizeof(s) - 1); i >= 0; i--){
		putchar(s[i]);
	}
}

int main(void){
	
	char s[] = "abcd";
	put_stringr(s);
	
	return 0;
} 
