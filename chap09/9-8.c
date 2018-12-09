#include<stdio.h>

void put_stringr(const char str[]){
	
	int len = 0;
	
	while(str[len]){
		len++;
	}
	
	while(len){
		putchar(str[--len]);
	}
	
}

int main (void){
	
	int n;
	char str[128];
	
	printf("请输入字符串：");
	
	scanf("%s", str);
	
	printf("逆向后的结果是：");
	put_stringr(str);
	
	return 0;
}
