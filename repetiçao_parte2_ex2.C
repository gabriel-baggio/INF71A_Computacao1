#include<stdio.h>
 int main(){

 float num, Media = 0;
 int positivo = 0, nloop = 0;

 printf("Digite um numero: ");
 scanf("%f", &num);

 while(num != -1000){

     if(num >= 0){
        positivo++;
        Media = Media + num;
        nloop++;
    }
     printf("Digite outro numero: ");
     scanf("%f", &num);

  }
  printf("Numero de vezes que numeros positivos apareceram: %d\n",positivo);
  printf("A media dos numeros positivos foi: %.1f", Media = Media/nloop);
 }
