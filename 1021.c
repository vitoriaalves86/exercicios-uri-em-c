#include <stdio.h>

int main (void){

    float valor;
    scanf("%f", &valor);

    int nota_100,nota_50, nota_20, nota_10, nota_5, nota_2;
    int moeda1, moeda50, moeda25, moeda10, moeda5, moeda01;

    printf("NOTAS:\n");
    nota_100 = valor / 100;
    printf("%d nota(s) de R$ 100.00\n", nota_100);
    valor = valor % 100;
    nota_50 = valor / 50;
    printf("%d nota(s) de R$ 50.00\n", nota_50);
    valor = valor % 50;
    nota_20 = valor / 20;
    printf("%d nota(s) de R$ 20.00\n", nota_20);
    valor = valor % 20;
    nota_10 = valor / 10;
    printf("%d nota(s) de R$ 10.00\n", nota_10);
    valor = valor % 10;
    nota_5 = valor / 5;
    printf("%d nota(s) de R$ 5.00\n", nota_5);
    valor = valor % 5;
    nota_2 = valor / 2;
    printf("%d nota(s) de R$ 2.00\n", nota_2);
    valor = valor % 2;
    printf("MOEDAS:\n")
    moeda1 = valor / 1;
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    valor = valor % 1;
    moeda50 = valor / 0.50;
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    valor = valor % 0.50;
    moeda25 = valor / 0.25;
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    valor = valor % 0.25;
    moeda10 = valor / 0.10;
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    valor = valor % 0.10;
    moeda5 = valor / 0.05;
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    valor = valor % 0.05;
    moeda01 = valor / 0.01;
    printf("%d moeda(s) de R$ 0.01\n", moeda01);


return 0;
}

