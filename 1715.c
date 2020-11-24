#include <stdio.h>
int main (){
    int num_jogador, num_partida;
    int i,j;
    int top = 0;

    scanf("%d %d", &num_jogador, &num_partida);
    int gols_partida[num_partida];
    for(i=0; i< num_jogador; i++){
        for(j=0; j< num_partida; j++){
           scanf("%d", &gols_partida[j]);

        }
        top +=1;
        for(j=0; j< num_partida; j++){
            if(gols_partida[j] == 0){
                top = top - 1;
            break;
            }
        }
    }
    printf("%d\n", top);
return 0;
}

