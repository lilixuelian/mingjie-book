/*
   ��дһ�γ�������6��ѧ��2�ſγ̵ķ�������ʾ���ſγ̵��ֺܷ�ƽ���֣��Լ�����ѧ�����ֺܷ�ƽ���� 
*/

#include<stdio.h>

int main (void)
{
	int math[6], chinese[6], sum[6];
	int i, j, sum1, sum2, a;
	double aver[6]; 
	
	for(i = 0; i < 6; i++);{
	    printf("math:", math[i]);
	    scanf("%d",&math[i]);
	    sum1 += math[i];
		}
	
	
	for(j = 0; j < 6; j++);{
		printf("chinese:",chinese[j]);
	    scanf("%d",&chinese[j]);
		sum2 += chinese[j];
	}
	
	for(a = 0; a < 6; a++){
		sum[a] = math[a] + chinese[a];
		aver[a] = sum [a] / 2;
		printf("students' sum:%d    students' average:%d\n",sum[a],aver[a]);
	}
	
	printf("math sum : %d   ",sum1);
	printf("math average :%d",(double)sum1/2);
	
	
	return 0;
}
