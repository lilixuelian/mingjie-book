/*
   编写一段程序，向右面那样显示出读取的实数的值。
*/

#include <stdio.h>

int main(void)
{
	double no;
	
	printf("请输入一个实数："); scanf("%1f",&no);
	
	printf("你输入的是%f。",no); 
	
	return 0;
}

/*
   主要问题：1、第二个printf忘记写%f
             2、分号
			 3、不知道为什么实数输入出来总是0.000000！！！！1 
*/ 
