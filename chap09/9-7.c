#include<stdio.h>

void put_stringn(const char s[], int n){
	int i;
	for(i =0; i < n; i++){
		printf("%s", s);
	}
} 

int main (void){
	
	char s[] = "abc";
	int n = 3;
	
	put_stringn(s, n);
	
	return 0;
}
