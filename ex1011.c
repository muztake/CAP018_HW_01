#include <stdio.h>
#include <math.h>

int main(){
	int r; 
	scanf("%d", &r);
	double t = pow(r,3.0) * 3.14159 * (4.0/3.0);
	printf("VOLUME = %.3lf\n", t);
	return 0;
}