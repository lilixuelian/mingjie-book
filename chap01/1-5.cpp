/*
	编写一段程序，读取一个整数并显示该整数加上12之后的结果 
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);							/* 读取整数值 */

	printf("您输入值加上12的结果是%d。\n", no+12);

	return 0;
}
