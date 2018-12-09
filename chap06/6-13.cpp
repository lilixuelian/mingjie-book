#include <stdio.h>

int mat_print(int tensu[4][3][2],int i)
{
	int a, b;
	
	if(i == 1)
	for(a = 0; a < 4; a++){
		for(b = 0; b < 3; b++){
			printf("%d  ", tensu[a][b][1]);
		}
		
		putchar('\n');
	}
	else
	for(a = 0; a < 4; a++){
		for(b = 0; b < 3; b++){
			printf("%d  ", tensu[a][b][2]);
		}
		
		putchar('\n');
	}
}

int main (void)
{
	int a[4][3][2] = { { {91, 97}, {63, 67}, {78, 82} }, 
	                   { {67, 73}, {72, 43}, {46, 46} }, 
					   { {89, 97}, {34, 56}, {53, 21} }, 
					   { {32, 85}, {54, 46}, {34, 35} } }; 
	
	puts("第一次考试的分数");
	mat_print(a, 1);
	puts("第二次考试的分数");
	mat_print(a, 2);
	
	return 0;
}
