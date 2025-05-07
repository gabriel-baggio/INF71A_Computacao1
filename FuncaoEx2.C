#include <stdio.h>
#include <math.h>

    float arredonda(float valor){
        if (valor > 0 && fmod(valor, 0.5) == 0){
            valor = valor + 0.1;
            return (valor);
        }else{
            return(valor);
        }
    }

int main(){
    
    double numero;
    
    
    printf ("digite um numero: ");
    scanf("%lf",&numero);
    printf("o arredondameinto do seu numero com maior magnetude é : %.0lf", arredonda(numero));
    
}
