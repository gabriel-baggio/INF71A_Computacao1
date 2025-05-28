#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criarMatriz(int m[][5], int n[][5], int i, int j)
{
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            m[i][j] = rand() % 100;
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            n[i][j] = rand() % 100;
        }
    }
}
void op1(int m[][5], int n[][5], int i, int j)
{
    printf("-------MATRIZ 1----------\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------\n");    
    printf("-------MATRIZ 2----------\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d  ", n[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------\n");    
}
void op2(int m[][5], int n[][5], int i, int j)
{
    int s[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            s[i][j] = m[i][j] + n[i][j];
        }
    } 
    printf("-------SOMA DAS MATRIZES----------\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d  ", s[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------\n");
}
void op3(int m[][5], int n[][5], int i, int j)
{
    int s[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            s[i][j] = m[i][j] - n[i][j];
        }
    }  
    printf("-------SUBTRAÇÃO DAS MATRIZES----------\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d  ", s[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------\n");
}
void op4(int m[][5], int n[][5], int i, int j, int a)
{
    int s[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            s[i][j] = m[i][j] * a;
        }
    }  
    printf("-------MULTIPLICAÇÃO DA MATRIZ----------\n");
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d  ", s[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------\n");
}
int main()
{
    int matriz1[5][5], matriz2[5][5], i = 0, j = 0, a = 0, b, c= 0;
    printf("Digite qual opçao voce quer:\n");
    printf("opçoes:\n 1)crirar duas matrizes de numeros inteiros.\n 2)imprimir as matrizes.\n 3)somar as matrizes. \n 4)subtrair as matrizes.\n 5)multiplicar as matrizes.\n 6)parar programa.\n");
    scanf("%d",&b);
    while(c != 10){
        if(b == 1){
           criarMatriz(matriz1, matriz2, i, j);
           c = 1;
        }
        else if(b > 1 && c == 1 && b < 6){
            if(b == 2){
             op1(matriz1, matriz2, i, j);
          }
            else if(b == 3){
                op2(matriz1, matriz2, i, j);
            }
            else if(b == 4){
                op3(matriz1, matriz2, i, j);
            }else{
                printf("Digite o valor que vai multiplicar a matriz: ");
                scanf("%d",&a);
                op4(matriz1, matriz2, i, j, a);
            }
        }
        else if(b == 6){
            return 0;
        }else{
            printf("nao existe nenhuma matriz, favor criar as matrizes primeiro: ");
            scanf("%d",&b);
        }
        printf("\necolha outra opçao:");
        scanf("%d",&b);
    }
}
