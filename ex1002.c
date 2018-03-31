/**
 * Author: Henrique Cunha
 * UFSCAR RA: 759023
 * E-mail: henriquecunhawd@gmail.com
 * Github: @muztake
 * License: ISC
*/
#include <stdio.h>

int main(){
    double r, pi = 3.14159; // Declara a váriavel que vai receber o raio e o número pi
    scanf("%lf", &r); // Escreve o valor recebido na memória da váriavel, a flag 'lf' é necessária para double
    printf("A=%.4lf\n", pi * r * r); // Imprime a área no formato adequado, sendo o '.4' utilizado antes do 'lf' para demarcar a quantidade de casas decimais
    return 0;
}