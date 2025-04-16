#include<stdio.h>
 int main(){

 float num, Maior = 0;

 printf("Digite um numero: ");
 scanf("%f", &num);

 while(num >= 0){
     if(Maior < num){
        Maior = num;
    }
     printf("Digite outro numero: ");
     scanf("%f", &num);

  }
  printf("O naior numero digitado foi: %.2f", Maior);
 }
