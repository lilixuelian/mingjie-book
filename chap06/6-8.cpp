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
	
	puts("请输入5名学生的分数：");
	
	for(i = 0;i < NUMBER; i++){
		printf("[%d]数学：",i+1);
		scanf("%d",&mat[i]);
		printf("   英语：");
		scanf("%d",&eng[i]);
	}
	
	printf("英语的最低分=%d",min_of(mat,NUMBER));
	printf("数学的最低分=%d",min_of(eng,NUMBER));
	
	return 0;
	
}
