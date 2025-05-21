#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
  
    int n; 
    
    printf("Digite quantas linhas o triangulo de pascal vai ter "); 
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        int val = 1;
        for (int k = 0; k <= i; k++) {
            printf("%d ", val);
          
            val = val * (i - k) / (k + 1);  
        }
        printf("\n");
    }

    return 0;
}
