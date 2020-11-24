#include <stdio.h>

int main (void){


    double tempo, distancia, velocidade_media;
    double litros_gastos;
    scanf("%lf", &tempo);
    scanf("%lf", &distancia);


    litros_gastos = (tempo*distancia)/12;

    printf("%.3lf\n", litros_gastos);


return 0;
}
