/*
	显示输入的整数值的所有约数之后，显示约数的个数 
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	int cnt=0;

	printf("整数值：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		if (n % i == 0)
			{
			printf("%d\n", i);
			cnt+=1;
		    }
	printf("约数有%d个",cnt);
	putchar('\n');

	return 0;
}
