/*
   代码清单3-9是判断所输入的整数值的符号的程序，请将其改写为可以将输入、显示这一过程循环任意次。 
*/
#include<stdio.h>
int main (void)
{
	int retry;
	
	do{
		int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no == 0)
		puts("该整数为0。");
	else if (no > 0)
		puts("该整数为正数。");
	else
		puts("该整数为负数。");
		
		printf("要重复一次吗？【yes...0/no...9】:");
		scanf("%d",&retry);
		 
	}while (retry==0);
	
	return 0;
 } 
 
 /*
     你总是忘记scanf加&！！！！ 
 */
