/*
	��дһ�γ��򣬶�ȡһ������������ʾ��λ���� 
*/

#include <stdio.h>

int main(void)
{
	int no;
	int cnt = 0;

	do {
		printf("������һ����������");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a�벻Ҫ�������������");
	} while (no <= 0);

	
	printf("%d��λ����",no);
	while (no > 0) {	 
		no /= 10;
		cnt += 1;					
	}
	printf("%d��",cnt);

	return 0;
}
