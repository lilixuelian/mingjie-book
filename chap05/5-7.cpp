 /*
    编写一段程序，像右边这样读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
	注意利用对象式宏来声明数组的元素个数 
 */ 

#include<stdio.h>

#define NUMBER 50

int main (void)
{
	int tensu[NUMBER];
	int i,j;
	
	printf("数据个数：",NUMBER);
	scanf("%d",&NUMBER);
	
	for(i = 0;i < NUMBER;i++)
	printf("%2d号：\n",i);
	scanf("%2d",&i); 
	
	for(j = 0;j < NUMBER;j++)
	{
	putchar('{'); 
	printf("%d,",j);
    }
    putchar('}');
	
	
	return 0;
}
