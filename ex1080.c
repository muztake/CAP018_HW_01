#include <stdio.h>
 
int main() {
    int i = 0, n, maior = -1, pos = 0;
    for(; i < 100; i++){
        scanf("%d", &n);
        if(n > maior) {
            maior = n;
            pos = i + 1;
        }
    }
    printf("%d\n%d\n", maior, pos);
    return 0;
}