
#include <stdio.h>



int main(void)

{

	int i;

	static double v[5];

	for (i = 0; i < 5;i++){
		
		v[i] = 0.0;

		printf("v[%d]=%.1f\n", i, v[i]);
	}
	    
	    



	return 0;

}
