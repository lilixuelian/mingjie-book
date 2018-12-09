 /*
	如果在int型变量的声明中喂变量赋一个实数值的初始值（如3.14或5.7等）会怎样呢？
	请生成程序并确认 
*/

#include <stdio.h>

int main(void)
{
	int vx , vy ;						/* vx和vy是int类型的变量 */

	vx = 3.14;							/* 把57赋给vx */
	vy = 5.7;						/* 把vx+10赋给vy */

	printf("vx的值是%d。\n", vx);	/* 显示vx的值 */
	printf("vy的值是%d。\n", vy);	/* 显示vy的值 */

	return 0;
}

/* 
    最后的结果分别是3和5
	也就是只取整数位
*/ 
