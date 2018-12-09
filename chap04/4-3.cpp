/*
	对代码清单4-5中的程序进行修改，当输入的值为负数的时候不执行换行操作 
*/

#include <stdio.h>

int main(void)
{
	int n;

	printf("请输入一个正整数：");
	scanf("%d", &n);

	while (n >= 0) {
		printf("%d ", n);
		n--;			/* no的值递减 */
	}
	
	if (n >= 0)
	printf("\n");		/* 换行 */

	return 0;
}
