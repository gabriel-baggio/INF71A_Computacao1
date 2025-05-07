#include <stdio.h>

    int calculaDigitiVerificador(int num){
        int a,b,c;
        
        a = (num % 10)*3;
        b = (num % 100)*2;
        c = num % 1000;
        
        return (((a + b + c) % 11)%10);
        
    }

int main(){
    
    
    int numero;
    
    printf ("digite um numero de 3 digitos: ");
    scanf("%d",&numero);
    printf("o digito verificados do numero que voce digitou é: %d", calculaDigitiVerificador(numero));
    
}
