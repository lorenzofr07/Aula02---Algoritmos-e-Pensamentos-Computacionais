#include<stdio.h>
#include<locale.h>

int main()

{
    setlocale(LC_CTYPE, "");
    float raio;
    float perimetro;
    printf("Qual é o valor do raio? ");
    scanf("%f", &raio);

    perimetro = 2* 3.14 * raio;

    printf("O perímetro é: %.2f ", perimetro);

    return 0;



}
