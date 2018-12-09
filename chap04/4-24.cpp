/*
   编写一段程序，输入一个整数，像右面这样显示出输入整数层的金字塔形状。 
*/

#include<stdio.h>

int main (void)

{ 
	int floor, i , j,  k;
	int n=1;
	
	puts("让我们来画一个金字塔。");
	printf("金字塔有几层：%d",floor);
	scanf("%d",&floor);

	for(i = 1 ; i <= floor; i++)
	  {
  
		for( j = 1 ; j <= floor-i; j++)
		   {
		   putchar(' ');
		   
		   k = 2i-1
		   while( n<=k)
		       {
			   n++;
		       putchar('*'); 
		       printf("\n");
		       }
	       }
	       
      }
      
	return 0;
 } 
 
 /*
    不会啊啊啊啊！！！ 
 */
