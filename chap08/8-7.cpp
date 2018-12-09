#include <stdio.h>

int combination(int n, int r)
{
	int i;
	int m = 1;
	
	if ((r + r) > n)  /* 这里为什么不能写成2r啊，总显示错误 */
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
	
	puts("请输入两个数：");
	
	printf("n：");
	scanf("%d", &n);
	
	printf("r：");
	scanf("%d", &r);
	
	printf("组合数的值为：%d", combination( n, r ));
	
	return 0;
 } 
