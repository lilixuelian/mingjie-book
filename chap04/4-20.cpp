/*
   编写一段程序，像右面这样为九九乘法表增加横纵标题。 
*/

#include<stdio.h>

int main (void)
{
	int i,j,n;
	
	printf("   |");
	
	for (n=1;n<=9;n++)
	printf("%3d ",n);
	putchar('\n');
	
	puts("--------------------------------------------");
	
	for (i=1;i<=9;i++)
	{
		printf("%3d|",i);
		
		for(j=1; j<=9;j++)
		printf("%3d ",i*j);
		putchar('\n');
	    }
	
	return 0;
}
