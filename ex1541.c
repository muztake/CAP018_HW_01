/**
 * Author: Henrique Cunha
 * UFSCAR RA: 759023
 * E-mail: henriquecunhawd@gmail.com
 * Github: @muztake
 * License: ISC
*/
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;  
    while(scanf("%d", &a) && a != 0){
    	scanf("%d %d", &b, &c);
	int area = (a * b * 100) / c;
	area = sqrt(area);
	printf("%d\n", area);
    }
    return 0;
}
