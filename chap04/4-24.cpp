/*
   ��дһ�γ�������һ��������������������ʾ������������Ľ�������״�� 
*/

#include<stdio.h>

int main (void)

{ 
	int floor, i , j,  k;
	int n=1;
	
	puts("����������һ����������");
	printf("�������м��㣺%d",floor);
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
    ���ᰡ������������ 
 */
