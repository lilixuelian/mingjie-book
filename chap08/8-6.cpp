#include <stdio.h>

int main (void)
{
	int i, n;
	
	printf("请输入一个整数n：");
	scanf("%d", &n);
	
	for(i = 1; n > 0; n--){
		
		i *= n;	
	} 
	
	printf("n! = %d", i);
	
	return 0;
}
