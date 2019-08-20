#include <stdio.h>

int str_char(const char s[], int c){
	int cnt = -1, i = 0;
	while(s[i] != '\0'){
		if(s[i] == c){
			cnt = i;
			printf("cnt=%d", cnt);
			break;
		}
		i++;
		printf("%d", i);
	}
	return cnt;
} 

int main (void){
	
	char s[] = "abc4";
	int cnt;
	char c = 'b';
	
	cnt = str_char(s, c);
	
	printf("%d", cnt);
	
	return 0;
}
