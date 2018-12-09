/*
	读取两个边的边长，以较小的数作为行数，以较大的数作为列数 
*/

#include <stdio.h>

int main(void)
{
	int i, j, temp;
	int height, width;

	puts("让我们来画一个长方形。");
	printf("一边：");   scanf("%d", &height);
	printf("另一边：");   scanf("%d", &width);
	
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
