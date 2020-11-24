#include <stdio.h>
int main()
{
    int inicial, final;
    int tempo;
    scanf("%d %d", &inicial, &final);

    if(final <= inicial ) final += 24;
    printf("O JOGO DUROU %d HORA(S)\n", final - inicial);


return 0;
}

