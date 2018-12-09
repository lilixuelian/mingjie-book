/*
   编写一段程序，求4行3列矩阵和3行4列矩阵的乘积。各构成元素的值从键盘输入。 
*/

#include<stdio.h>

int main (void)
{
	int i, j, a, b;
	int tensu1[4][3], tensu2[3][4];
	
	puts("请输入四行三列矩阵的实数"); 
	
	for(i = 0;i < 4;i++){
		for(j = 0;j < 3;j++){
			printf("tensu1[%d][%d]=",i,j);
		    scanf("%d",&tensu1[i][j]);	
		}
	}
	
	puts("请输入三行四列矩阵的实数"); 
	
	for(a = 0;a < 3;a++){
		for(b = 0;b < 4;b++){
			printf("tensu2[%d][%d]=",a,b);
		    scanf("%d",&tensu1[a][b]);	
		}
	}
	
	return 0;
 } 
 
/*
  不会输入矩阵啊啊啊  
*/ 
