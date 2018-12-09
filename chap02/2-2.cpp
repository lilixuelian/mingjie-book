/*
    编写一段程序，向右面那样读取两个整数，然后输出它们的和以及积
*/

#include <stdio.h>

int main(void)
{
	int num1,num2;
	
	puts("请输入两个整数");
	
	printf("整数a:"); scanf("%d",&num1);
	printf("整数b:"); scanf("%d",&num2);
	
	printf("它们的和是%d，积是%d。",num1+num2,num1*num2);
	
	return 0;
 } 
 
/*
   编写这个程序过程中暴露了许多问题：
   1、总是忘记写分号
   2、输入输入！！！连scanf怎么输入？
   3、忘记“建立盒子”，不写int
   4、忘记写& 
*/ 
