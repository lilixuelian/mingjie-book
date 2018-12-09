/*
   编写一段程序，向右面那样读取两个整数的值，计算出前者是后者的百分之几，并用实数输出结果
*/

#include <stdio.h>

int main(void)
{
	int num1,num2;
	
	puts("请输入两个整数。");
	
	printf("整数a："); scanf("%d",&num1);
	printf("整数b："); scanf("%d",&num2);
	
	printf("a是b的%f%%",(double)num1/num2*100);
	
	return 0;
 } 
 
/*
   point：1、写百分之几的时候在printf里要用两个%%
          2、为了使得代码简洁一些，可以用较短的符号代替，例如num1改为a，页面会简洁一些 
*/ 
