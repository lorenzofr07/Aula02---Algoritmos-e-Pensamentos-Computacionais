#include<stdio.h>
#include<locale.h>

int main()

{
    setlocale(LC_CTYPE, "");
    int semanas;
    int meses;
    printf("Qual a quantidade de semanas de gestação?");
    scanf("%d", &semanas);

    meses = semanas/4;
    printf("A quantidade de meses de gestação é: %d ", meses);

    return 0;

}
