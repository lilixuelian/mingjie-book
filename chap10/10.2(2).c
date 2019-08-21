#include<stdio.h>

int year(int y){
	if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
		return 1;
	}
	else return 0;
}

int month(int y, int m){
	int i;
	
	switch(m){
		case 4:
		case 6:
		case 9:
		case 11: i = 30; break;
		case 2: if(year(y)) i = 29; else i = 28; break;
		default: i = 31; break; 
	}
	return i;
}

void decrement_date(int *y, int *m, int *d){
	*d -= 1;
	if(!*d){
		*m -= 1;
		if(m){
			*d = month(*y, *m);
		}
		else{
			*y -= 1;
			*m = 12;
			*d = month(*y, *m);
		}
	}
}

int main (void){
	
	int y, m, d;
	
	scanf("%d %d %d", &y, &m, &d);
	
	decrement_date(&y, &m, &d);
	printf("before: %d %d %d", y, m, d);
//	printf("\nafter: %d", increment_date(&y, &m, &d));
	
	return 0;
}

