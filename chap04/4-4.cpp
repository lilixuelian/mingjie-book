/*
	对代码清单4-6的程序进行修改，使其递减到1而非0，当输入的值小于0时，不进行换行 
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	while (no >= 1)
		printf("%d ", no--);	/* no的值在显示之后递减 */
	
	if (no >= 0)
	printf("\n");				/* 换行 */

	return 0;
}
