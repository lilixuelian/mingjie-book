/*
   编写一段程序，像右面这样按照升序显示出小于输入值的所有正偶数 
*/

#include<stdio.h>

int main (void)
{
	int no,i;
	
	printf("请输入一个正整数：");
	scanf("%d",&no);
	
	i=2;
	while (i <=no )
    { 
	   printf("%d ",i);
	   i += 2;
	} 
	
	printf("\n");
	
	 
	return 0;
 } 
 
 
 /*
 1、换行是\还是/你居然记错了！！！
 2、当while后面只循环一句话的时候，不需要写{}
 3、remember 递增要引用一个新的变量 
 4、还是总是忘记 ;和""
 5、=和== 
 6、拆掉思维里的墙，递增除了++还能怎样 
 */
