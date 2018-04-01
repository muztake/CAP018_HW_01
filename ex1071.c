/**
 * Author: Henrique Cunha
 * UFSCAR RA: 759023
 * E-mail: henriquecunhawd@gmail.com
 * Github: @muztake
 * License: ISC
*/
#include <stdio.h>
#define maior(a, b) (( a > b ? a : b ))
#define menor(a, b) (( a < b ? a : b ))
 
int main() {
    int a, b, soma = 0;
    scanf("%d %d", &a, &b);
    int i = menor(a, b) + 1;
    for(; i < maior(a, b); i++)
        soma += i % 2 ? i : 0;
    printf("%d\n", soma);
    return 0;
}