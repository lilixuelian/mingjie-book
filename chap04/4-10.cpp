/*
   编写一段程序，使之像右边这样连续显示*，总个数等于所输入的整数值。另外，当输入0以下的整数时，则什么也不显示。 
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("正整数");
	scanf("%d", &no);

	while (no-- > 0)
   { 
	putchar('*');
	putchar('\n');
	} 
 
	return 0;
}
