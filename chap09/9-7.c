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
	
	printf("请输入字符串：");
	
	scanf("%s", str);
	
	printf("请输入字符串显示次数：");
	
	scanf("%d", &n);
	
	printf("最后的结果是：");
	put_stringn(str, n);
	
	return 0;
}
