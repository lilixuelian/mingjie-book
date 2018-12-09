 /*
    编写一段程序，求1到n的和。n的值从键盘输入。 
 */ 
 
#include<stdio.h>
 
 int main (void)
 
 {
 	int n;
 	int cnt = 0;
 	int sum=0;
 	
 	printf("n的值：");
 	scanf("%d",&n);
 	
 	for(n > 0;cnt < n; cnt++ , sum += cnt);
 	
 	
 	   printf("1到n的和为%d",sum);
 	
 	return 0;
 }
