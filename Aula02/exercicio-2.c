#include<stdio.h>
#include<locale.h>

int main()

{
    setlocale(LC_CTYPE, "");
    float comprimento;
    float largura;
    float perimetro;
    float area;
    printf("Qual o valor do comprimento? ");
    scanf("%f", &comprimento);
    printf("Qual o valor da largura? ");
    scanf("%f", &largura);

    perimetro = 2* comprimento + largura;

    printf("O perímetro do jardim é: %.2f", perimetro);

    area = comprimento * largura;

    printf("A área do jardim é: %.2f", area);

    return 0;

}
