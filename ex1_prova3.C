#include <stdio.h>
#include <math.h>

int main()
{
    int força, N_arma;
    float critico, dano;

    printf("digite a força do personagem (entre 1-100): ");
    scanf("%d", &força);
    while(força < 1 || força > 100){
        printf("valor de força invalido. \nDigite um valor valido: ");
        scanf("%d", &força);
    }
    printf("digite o nivel da arma (entre 1-50): ");
    scanf("%d", &N_arma);
    while(N_arma < 1 || N_arma > 50){
        printf("valor do nivel de arma é invalido. \nDigite um valor valido: ");
        scanf("%d", &N_arma);
    }
    printf("digite a multiplacação do critico (entre 1.0-2.0): ");
    scanf("%f", &critico);
    while(critico < 1 || critico > 2){
        printf("valor da multiplacação do critico é invalido. \nDigite um valor valido: ");
        scanf("%f", &critico);
    }

    dano = força * N_arma * critico;

    if(dano >= 5000){
        printf("DANO CRITICO MASSIVO!");
    }else if (dano >= 1000 && dano < 5000){
        printf("DANO CRITICO!");
    }else{
        printf("Dano normal");
    }
}
