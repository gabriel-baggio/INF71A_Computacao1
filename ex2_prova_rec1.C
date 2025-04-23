#include <stdio.h>
#include <math.h>

int main()
{
	int Num, Multi, inicio, fim, soma = 0, i = 0;

	printf("digite um numero inteiro ");
	scanf("%d", &Num);
	printf("digite o numero de inicio ");
	scanf("%d", &inicio);
    printf("digite o numero do final ");
	scanf("%d", &fim);

	for(i = inicio; i <= fim; i++){
	    Multi = i % Num;
	    if(Multi == 0){
	       soma = soma + i;
	    }
    }

	printf("o valor da soma dos multiplicadores de %d no intervalo de %d e %d é: %d", Num, inicio, fim, soma);
}
