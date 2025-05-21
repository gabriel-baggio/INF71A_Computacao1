#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5], i, j, n;
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            n = rand();
            matriz[i][j] = n;
        }
    }
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d  ", matriz[j][i]);
        }
        printf("\n");
    }

    
}
