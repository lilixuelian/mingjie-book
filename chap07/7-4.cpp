#include <stdio.h>

unsigned set(unsigned x, int pos)
{
	unsigned i = 1;
	
	return x | (i << pos);
}

unsigned reset(unsigned x, int pos)
{
	unsigned i = 1;
	
	return x & ~(i << pos);
}

unsigned inverse(unsigned x, int pos)
{
	unsigned i = 1;
	
	return x ^ (i << pos);
}

int main(void)
{
	unsigned i, pos;
	
	printf("请输入整数:%u\n", i);
	scanf("%u", &i);
	printf("请输入第几位:%u\n", pos);
	scanf("%u", &pos);
	
	printf("将第%d位设为1后的值%d\n", pos, set(i, pos));
	printf("将第%d位设为0后的值%d\n", pos, reset(i, pos));
	printf("将第%d位取反后的值%d\n", pos, inverse(i, pos));

    return 0;
    
}
	
	
