/*
	��ʾ���������ֵ������Լ��֮����ʾԼ���ĸ��� 
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	int cnt=0;

	printf("����ֵ��");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		if (n % i == 0)
			{
			printf("%d\n", i);
			cnt+=1;
		    }
	printf("Լ����%d��",cnt);
	putchar('\n');

	return 0;
}
