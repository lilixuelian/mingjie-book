#include <stdio.h>

int gcd(int x, int y)
{
	int t;
	
	if (x < y){
		x = x + y;
		y = x - y;
		x = x - y;
	}
	
	do{
		t = x % y;
  	    x = y;
	    y = t;
		
	}while(y != 0);
	
	return x;
}



int main (void)
{
	int x, y;
	
	puts("��������������");
	
	printf("x��");
	scanf("%d", &x);
	
	printf("y��");
	scanf("%d", &y);
	
	printf("x��y�����Լ��Ϊ��%d", gcd(x, y));
	
	
	return 0;
}
