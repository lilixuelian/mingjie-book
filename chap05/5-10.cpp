/*
   ��дһ�γ�����4��3�о����3��4�о���ĳ˻���������Ԫ�ص�ֵ�Ӽ������롣 
*/

#include<stdio.h>

int main (void)
{
	int i, j, a, b;
	int tensu1[4][3], tensu2[3][4];
	
	puts("�������������о����ʵ��"); 
	
	for(i = 0;i < 4;i++){
		for(j = 0;j < 3;j++){
			printf("tensu1[%d][%d]=",i,j);
		    scanf("%d",&tensu1[i][j]);	
		}
	}
	
	puts("�������������о����ʵ��"); 
	
	for(a = 0;a < 3;a++){
		for(b = 0;b < 4;b++){
			printf("tensu2[%d][%d]=",a,b);
		    scanf("%d",&tensu1[a][b]);	
		}
	}
	
	return 0;
 } 
 
/*
  ����������󰡰���  
*/ 
