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
	
	printf("�������ַ�����");
	
	scanf("%s", str);
	
	printf("�����Ľ���ǣ�");
	put_stringr(str);
	
	return 0;
}
