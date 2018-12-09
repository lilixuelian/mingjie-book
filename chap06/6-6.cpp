#include <stdio.h>

int alert (int n )
{
	int a;
	
	for(a = 0;a < n;a++){
		putchar('\a');
	}
}

int main (void)
{
	int i;
	
	printf("请输入响铃次数：%d", i);
	scanf("%d", &i);
	
	alert(i);
	
	return 0;
}

/*
   为什么总是只响一声？ 
*/
