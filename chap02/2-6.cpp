/*
   编写一段程序，向右面那样读取表示身高的整数值，显示出标准体重的实数值。标准体重根据公式
   （身高-100）*0.9进行计算，所得结果保留一位小数
*/
#include <stdio.h>
int main(void)
{
	int a;
	double b;
	
	printf("请输入您的身高");  scanf("%d",&a);
	
	b=(a - 100) * 0.9;
	
	printf("您的标准体重是%.1f公斤。\n",b);
	
	return 0;
 } 
