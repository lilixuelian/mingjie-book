#include <stdio.h>

int combination(int n, int r)
{
	int i;
	int m = 1;
	
	if ((r + r) > n)  /* ����Ϊʲô����д��2r��������ʾ���� */
	r = n - r;
	
	    for(i = 0; i < r; i++){
			m *= n;
			n--; 
		}
		return (m / r);
	
	
	
}



int main (void)
{
	int n, r;
	
	puts("��������������");
	
	printf("n��");
	scanf("%d", &n);
	
	printf("r��");
	scanf("%d", &r);
	
	printf("�������ֵΪ��%d", combination( n, r ));
	
	return 0;
 } 
