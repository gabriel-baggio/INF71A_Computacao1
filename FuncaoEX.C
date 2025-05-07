#include <stdio.h>

    int ANO(int ano){
        if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
            return (1);
        }else{
            return(0);
        }

    }

int main(){

    int data;

    printf ("digite um ano: ");
    scanf("%d",&data);
    if (ANO(data) == 1){
        printf("o ano %d é bissexto", data);
    }else{
        printf("o ano %d não é bissexto", data);
    }

}
