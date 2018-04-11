#include <stdio.h>
#include <math.h>

int main(){
	double n; 
	scanf("%lf", &n);

	int c[12] = {
		10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5 , 1
	}; 
  int x[12], i;
  
  int m = n * 100;
	printf("NOTAS:\n");
  
	for(i = 0; i < 12; i++){
		x[i] = ( m - (m % c[i]) ) / c[i];
		m -= x[i] * (c[i]);
		if(i == 6)
			printf("MOEDAS:\n");
		if(i > 5)
      printf("%d moeda(s) de R$ %.2lf\n", x[i], c[i]/100.00 );
		else
		  printf("%d nota(s) de R$ %d.00\n", x[i],  c[i] / 100);
		
	}
	return 0;
}