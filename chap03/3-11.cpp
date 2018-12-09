/*
   编写一段程序，向右面这样输入两个整数，如果它们的差值小于等于10，则显示“它们的差小于等于10”。否则，显示“它们的差大于11”。 
*/

#include<stdio.h>

int main(void)
{
	int a,b;
	
	puts("请输入两个整数");
	printf("整数A：");  scanf("%d",&a);
	printf("整数B：");  scanf("%d",&b);
	
	if (a-b<=10||b-a<=10)
	   puts("它们的差小于10");
	else
	   puts("它们的差大于11"); 
	
	return 0;
}

/*
  if条件后面不能加";"!!!!
*/
