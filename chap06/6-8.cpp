#include <stdio.h>

#define NUMBER 5

int min_of(const int v[],int n)
{
	int min = v[0];
	int i;
	
	for(i = 0; i < n; i++){
		if( v[i] < min)
		min = v[i];
	}
	
	return min;
}

int main(void)
{
	int i;
	int mat[NUMBER],eng[NUMBER];
	
	puts("������5��ѧ���ķ�����");
	
	for(i = 0;i < NUMBER; i++){
		printf("[%d]��ѧ��",i+1);
		scanf("%d",&mat[i]);
		printf("   Ӣ�");
		scanf("%d",&eng[i]);
	}
	
	printf("Ӣ�����ͷ�=%d",min_of(mat,NUMBER));
	printf("��ѧ����ͷ�=%d",min_of(eng,NUMBER));
	
	return 0;
	
}
