#include <stdio.h>

int main (void)
{
	int i, n;
	
	printf("������һ������n��");
	scanf("%d", &n);
	
	for(i = 1; n > 0; n--){
		
		i *= n;	
	} 
	
	printf("n! = %d", i);
	
	return 0;
}
