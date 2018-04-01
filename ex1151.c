/**
 * Author: Henrique Cunha
 * UFSCAR RA: 759023
 * E-mail: henriquecunhawd@gmail.com
 * Github: @muztake
 * License: ISC
*/
#include <stdio.h>

int main(){
    int n, i = 0, fib[46]; fib[0] = 0; fib[1] = 1;
    scanf("%d", &n);
    for(; i < n; i++){
        if(i >= 2) fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d%s", fib[i], i == n - 1 ? "" : " ");
    }
    printf("\n");
    return 0;
}