/*
	��ȡ�����ߵı߳����Խ�С������Ϊ�������Խϴ������Ϊ���� 
*/

#include <stdio.h>

int main(void)
{
	int i, j, temp;
	int height, width;

	puts("����������һ�������Ρ�");
	printf("һ�ߣ�");   scanf("%d", &height);
	printf("��һ�ߣ�");   scanf("%d", &width);
	
	if( height>width)
	{
	temp = height;
	height = width;
	width = temp;
    }
	
	
	for (i = 1; i <= height; i++) {			
		for (j = 1; j <= width; j++)		
			putchar('*');
		putchar('\n');						
	}
	return 0;
}
