
#include <stdio.h>

static int i;

int put_count(){

	return i++;

}

int main(void)

{
	put_count();
	printf("put_count:��%d��\n", i);

	put_count();
	printf("put_count:��%d��\n", i);

	put_count();
	printf("put_count:��%d��\n", i);

	return 0;

}
