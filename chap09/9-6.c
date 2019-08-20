#include <stdio.h>

int str_chnum(const char s[], char c){
	int i = 0, cnt = 0;
	
	while(s[i] != '\0'){
		if((s[i]) == c){
			cnt++;
		}
		i++;
	}
	return cnt;
}

int main (void){
	
	char s[] = "ababccddeee";
	char c = 'e';
	int cnt;
	
	cnt = str_chnum(s, c);
	
	printf("%d", cnt); 
	
	return 0;
}
