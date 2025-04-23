#include <stdio.h>

int main()
{
    int numero, i;
    printf("digite um numero: ");
    scanf("%d", &numero);

        for(i = 0; i <= numero; i ++){
            if(i % 2 == 0 && i != 0){
            printf("%d\n", i);
            }


    }

}
