 /*
    ��дһ�γ�����1��n�ĺ͡�n��ֵ�Ӽ������롣 
 */ 
 
#include<stdio.h>
 
 int main (void)
 
 {
 	int n;
 	int cnt = 0;
 	int sum=0;
 	
 	printf("n��ֵ��");
 	scanf("%d",&n);
 	
 	for(n > 0;cnt < n; cnt++ , sum += cnt);
 	
 	
 	   printf("1��n�ĺ�Ϊ%d",sum);
 	
 	return 0;
 }
