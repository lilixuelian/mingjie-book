#include<stdio.h>

int str_chnum(const char s[], char c){
	
	int len = 0;
	int num = 0;
	
	while(s[len]){
		len++;
		if(s[len] == 'c'){
			num++;
		}
	}
	
	return num;
}

int main (void){
	
	char c;
	char s[1000];
	
	scanf("%s", s);
	
	printf("%d", str_chnum(s, c));
	
	return 0;
}
