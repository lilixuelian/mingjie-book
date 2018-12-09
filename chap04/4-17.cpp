/*
   编写一段程序，像右边这样显示1到n的整数值的二次方 
*/ 

#include<stdio.h>

int main (void)

{
	int n;
	int i=0;
	
	printf("n的值：%d",n);
	scanf("%d",&n);
	
	for(n>0;i<=n;i++)
    printf("%d的二次方是%d\n",i,i*i);
		
	return 0;
}

/*
   1、for的三个语句之间是；，别总写错 
*/
