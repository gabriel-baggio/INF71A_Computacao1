#include<stdio.h>
 int main(){

 int senha = 0;
 printf("Digite a senha: ");
 scanf("%d", &senha);

 while(senha != 2002){
    printf("Senha Invalida! \n");
    printf("Digite a senha: ");
    scanf("%d", &senha);
    }
  printf("Acesso Permitido");
  }
