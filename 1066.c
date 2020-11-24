#include <stdio.h>

int main() {

    int valores[5];
    int i, positivo=0,negativo=0, impar=0, par=0;
    for(i=0; i<5; i++){
        scanf("%d", &valores[i]);

        if(valores[i] % 2 == 0)
            par += 1;

        if(valores[i] % 2 != 0)
            impar += 1;

        if(valores[i] > 0)
            positivo += 1;

        if(valores[i] < 0)
            negativo += 1;

    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}
