#include <stdio.h>

int main()
{
    float parede1, parede2, area, perimetro;

    printf("Digite a largura da parede menor em metros: ");
    scanf("%f", &parede1);
    printf("Digite a largura da parede maior em metros: ");
    scanf("%f", &parede2);



    area = parede1 * parede2;
    perimetro = (parede1 + parede2) * 2;

   printf("a area do quarto é: %.2fm² \n", area);
   printf("o perimetro total é: %.2fm \n", perimetro);
   printf("o perimetro real é: %.2fm \n", perimetro - 0.8);
}
