#include<stdio.h>

void put_stringn(const char str[], int n){
	
	int i;
	
	for(i = 0; i < n; i++){
		
		int j = 0;
		while(str[j]){
			
			putchar(str[j++]);
		}	
	}
}

int main (void){
	
	int n;
	char str[128];
	
	printf("�������ַ�����");
	
	scanf("%s", str);
	
	printf("�������ַ�����ʾ������");
	
	scanf("%d", &n);
	
	printf("���Ľ���ǣ�");
	put_stringn(str, n);
	
	return 0;
}
