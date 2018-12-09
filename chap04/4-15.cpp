/*
    编写一段程序，像右面这样显示出身高和标准体重的对照表。显示的身高范围和间隔由输入的整数值进行控制，标准体重精确到小数点后2位。 
*/

#include<stdio.h>

int main (void)

{
	int i,j,n;
	double m;
	
	printf("开始数值（cm）：",i);
	scanf("%d",&i);
	
	printf("结束数值（cm）：",j);
	scanf("%d",&j);
	
	printf("间隔数值（cm）：",n); 
	scanf("%d",&n);
	
	for (n>0;i<=j;i+=n)
	{
	m=(i-100)*0.9;
	printf("%dcm    %.2fkg\n",i,m);
    }
	
	return 0;
}

/*
   1、要想输入三个值，必须在i值的printf后面紧跟i值的scanf，否则就会出现三个值的输入... 
   2、像m这种带有精确度、小数点的数字，一定记得是double不是int，否则输出的全是0000 
*/
