#include<stdio.h>

int str_char(const char s[], char c){
	
	int len = 0;
	
	while(s[len]){
		len++;
		if(s[len] == 'c'){
			return len + 1;
		}
		else if((s[len] != c) && s[len] == '\0'){
			return -1;
		}
	}
	
}

int main (void){
	
	char c;
	char s[1000];
	
	scanf("%s", s);
	
	printf("%d", str_char(s, c));
	
	return 0;
}
