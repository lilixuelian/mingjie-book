#include <stdio.h>

#define NUMBER		5	
#define FAILED		-1		

int search(const int v[], int key, int n)
{
	int i = 0;
	int j, a;

	while (1) {
		if (i == n)
			return FAILED;
					
		else
		for(j = 0; j < n; j++){
			if(v[i] == key){
				a += 1;
			} 
		} 
			return a;			
		
	}
}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]��", i);
		scanf("%d", &vx[i]);
	}
	printf("Ҫ���ҵ�ֵ��");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FAILED)
		puts("\a����ʧ�ܡ�");
	else
		printf("%d�������г���%d�Ρ�\n", ky, idx);

	return 0;
}
