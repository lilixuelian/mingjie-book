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
	
	puts("请输入两个数：");
	
	printf("x：");
	scanf("%d", &x);
	
	printf("y：");
	scanf("%d", &y);
	
	printf("x和y的最大公约数为：%d", gcd(x, y));
	
	
	return 0;
}
