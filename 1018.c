#include <stdio.h>
int main (void){

    int valor;
    scanf("%d", &valor);

    int nota_100,nota_50, nota_20, nota_10, nota_5, nota_2, nota_1;


    printf("%d\n", valor);
    nota_100 = valor / 100;
    printf("%d nota (s) de R$ 100,00\n", nota_100);
    valor = valor % 100;
    nota_50 = valor / 50;
    printf("%d nota (s) de R$ 50,00\n", nota_50);
    valor = valor % 50;
    nota_20 = valor / 20;
    printf("%d nota (s) de R$ 20,00\n", nota_20);
    valor = valor % 20;
    nota_10 = valor / 10;
    printf("%d nota (s) de R$ 10,00\n", nota_10);
    valor = valor % 10;
    nota_5 = valor / 5;
    printf("%d nota (s) de R$ 5,00\n", nota_5);
    valor = valor % 5;
    nota_2 = valor / 2;
    printf("%d nota (s) de R$ 2,00\n", nota_2);
    valor = valor % 2;
    nota_1 = valor / 1;
    printf("%d nota (s) de R$ 1,00\n", nota_1);


return 0;
}

