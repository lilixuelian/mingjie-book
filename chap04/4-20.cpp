/*
   ��дһ�γ�������������Ϊ�žų˷������Ӻ��ݱ��⡣ 
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
