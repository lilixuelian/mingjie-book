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
	
	printf("���������������%d", i);
	scanf("%d", &i);
	
	alert(i);
	
	return 0;
}

/*
   Ϊʲô����ֻ��һ���� 
*/
