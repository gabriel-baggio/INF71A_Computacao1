#include <stdio.h>

int main()
{
    float parede, altura, area, qtd_tinta;

    printf("Digite a largura da parede ");
    scanf("%f", &parede);
    printf("Digite a altura da parede ");
    scanf("%f", &altura);

    area = parede * altura;
    qtd_tinta = (area / 2) + 0.4;

   printf("a area das paredes do quarto é: %.2f m²\n", area);
   printf("quantidade de tinta necessaria: %.0f litros", qtd_tinta);

}
