/*
	编写一段程序，读取一个正整数，显示其位数。 
*/

#include <stdio.h>

int main(void)
{
	int no;
	int cnt = 0;

	do {
		printf("请输入一个正整数：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a请不要输入非正整数。");
	} while (no <= 0);

	
	printf("%d的位数是",no);
	while (no > 0) {	 
		no /= 10;
		cnt += 1;					
	}
	printf("%d。",cnt);

	return 0;
}
