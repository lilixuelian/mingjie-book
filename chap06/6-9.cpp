#include <stdio.h>

#define NUMBER 80

int min_of(const int v[], int n)
{
	int i, temp;
	int b[NUMBER];
	
	if(n % 2 == 0){
		for(i = 0; i < n / 2; i++){
			
			temp = b[i];
			b[i] = v[n - 1 - i];
			v[n - 1 - i] = temp;
		
		printf("a[%d]=%d", i + 1,b[i]);	
		}
		
	}
	else{
		for(i = 0;i < (n - 1) / 2; i++){
			
			temp = b[i];
			b[i] = v[n - 1 - i];
			v[n - 1 - i] = temp;
			
		printf("a[%d]=%d\n", i + 1,b[i]);	
		}
	}
}

int main(void)
{
	int a[NUMBER];
	int n, i;
	int j = 0;
	
	printf("����������Ԫ�صĸ�����%d", n);
	scanf("%d", &n);
	
	puts("���������������ֵ��");
	for(i = 0; i < n;i++){
		printf("a[%d]=%d", i + 1,j);
		scanf("%d", &j);
	}
	
	printf("����ĵ���Ϊ��\n");
	printf("%d",min_of(a[], n));
	
	return 0;
}
