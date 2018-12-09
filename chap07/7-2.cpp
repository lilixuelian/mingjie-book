#include <stdio.h>

int main(void)
{
	unsigned i;
	
	printf("请输入一个整数：%d", i);
	scanf("%d", &i);	
	
	printf("该数左移2位后的值等于其乘以2的指数幂后的值：%u = %u\n", i << 2, i*2*2);
	printf("该数右移2位后的值等于其除以2的指数幂后的值：%u = %u\n", i >> 2, i/2/2); 
	
	return 0;
 } 


