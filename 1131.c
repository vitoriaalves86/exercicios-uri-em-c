#include <stdio.h>

int main() {

    int gol_inter, gol_gremio, total_inter=0, total_gremio=0;
    int empate=0, opcao, grenal =0;


    while(1){
        scanf("%d %d", &gol_inter, &gol_gremio);

        if(gol_inter > gol_gremio)
            total_inter += 1;

        if(gol_inter < gol_gremio)
            total_gremio += 1;
        if(gol_inter == gol_gremio)
        empate += 1;

        printf("Novo grenal (1-sim 2-nao)\n");
         grenal += 1;
        scanf("%d", &opcao);
        if(opcao==1)
            continue;
        if(opcao==2)
            break;


    }

    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", total_inter);
    printf("Gremio:%d\n", total_gremio);
    printf("Empates:%d\n", empate);
    if(total_inter > total_gremio)
        printf("Inter venceu mais\n");
    if(total_gremio > total_inter)
        printf("Gremio venceu mais\n");
    if(total_gremio == total_inter)
        printf("Nao houve vencedor\n");

    return 0;
}
