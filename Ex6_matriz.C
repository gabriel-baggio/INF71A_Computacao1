#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void preencheBingo(int m[][5], int i, int j)
{

    srand(time(NULL));
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            m[i][j] = rand() % 100;
        }
    }
}
void imprimeMatriz(int m[][5], int i, int j)
{
    
    
    printf("--------------------------------------\n");
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }
    
    printf("--------------------------------------");    
    
}

int main()
{
    
    int bingo[5][5], i = 0, j = 0;
    preencheBingo(bingo, i ,j);
    imprimeMatriz(bingo, i, j);



}
