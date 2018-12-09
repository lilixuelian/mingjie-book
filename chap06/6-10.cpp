#include <stdio.h>

#define NUMBER 6

int min_of(const int v[], int n)
{
	int i, temp;
	
	if(n % 2 == 0){
		for(i = 0; i < n / 2; i++){
			
			temp = v[i];
			v[i] = v[n - 1 - i];
			v[n - 1 - i] = temp;
		
		}
		
	}
	else{
		for(i = 0;i < (n - 1) / 2; i++){
			
			temp = v[i];
			v[i] = v[n - 1 - i];
			v[n - 1 - i] = temp;
				
		}
	
	}
	
	return;
}

int intary_rcpy (int v1[],const int v2[], int n)
{
	int i;
	
	for(i = 0; i < n; i++){
		v2[i] = v1[i]
	} 
}

int main(void)
{
	int main(void)

{

	int i;
	int a[NUMBER] = {15, 67, 28, 77, 35, 91};
	
	rev_intary(a, NUMBER);
	
	intary_rcpy (a[], b[], NUMBER)

	for (i = 0; i < NUMBER; i++){
		
		printf("a[%d] = %d\n", i, b[i]);
	}

	return 0;

}
