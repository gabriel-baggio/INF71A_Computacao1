#include <stdio.h>
#include <stdlib.h>

int main() {
  
    int matriz[10][10], n, maiorL, maiorN = 0, menor = 100; 
    int min = 0;
    int max = 100;
    int i, j;
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            n = (rand() % (max - min + 1)) + min;
            matriz[i][j] = n;
            if(n > maiorN){
                maiorL = i;
                maiorN = n;
            }
            printf("%d  ",n);
        }
        printf("\n");
    }
    
    
    printf("___________________________________________________________________\n\n");
    printf("A linha com o minimax é a linha %d \n", maiorL);
    printf("numeros da linha :");
    
    for(j = 0; j < 10; j++){
        printf(" %d ", matriz[maiorL][j]);
        if(menor > matriz[maiorL][j]){
            menor = matriz[maiorL][j];
        }
    }
    printf("\n O menor valor da linha é: %d", maiorN);
    printf("\n O menor valor da linha é: %d", menor);

}
