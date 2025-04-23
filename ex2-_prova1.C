#include <stdio.h>

int main()
{
    int min, seg, distancia, km_seg, km_min;

    printf("digite em quantos km voce percorreu: ");
    scanf("%d", &distancia);
    printf("digite em quantos minutos voce percorreu: ");
    scanf("%d", &min);
    printf("digite em quantos segundos voce percorreu: ");
    scanf("%d", &seg);

    km_seg = (seg/distancia);
    km_min = (min/distancia);

    printf("%d:%d", km_min, km_seg);
}
