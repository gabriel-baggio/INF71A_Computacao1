#include <stdio.h>

int main()
{
    int numero, i=1;
    printf("digite um numero: ");
    scanf("%d", &numero);

    printf("a atabuada do numero %d é: \n", numero);

    for(i = 1; i <= 10; i++){
        printf("%d * %d = %d \n", numero, i, numero*i);

    }

}
