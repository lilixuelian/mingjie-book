#include<stdio.h>

int leap_year(const int y){
	if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
		return 1;
	}
	else return 0;
}

void decrement_date(int *y, int *m, int *d){
	if(*d != 1){
		*d -= 1;
	}
	else if(*d == 1 && *m != 1){
		*m -= 1;
		if(*m == 2){
			if(leap_year(*y)){
				*d = 29;
			}
			else{
				*d =28;
			}
		}
		else if(*m == 4 || *m == 6 || *m == 9 || *m == 11){
			*d = 30;
		}
		else{
			*d = 31;
		}
	}
	else if(d == 1 && m == 1){
		*m = 12;
		*y -= 1;
		if(*m = 2){
			if(leap_year(*y)){
				*d = 29;
			}
			else{
				*d =28;
			}
		}
		else if(*m == 4 || *m == 6 || *m == 9 || *m == 11){
			*d = 30;
		}
		else{
			*d = 31;
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

