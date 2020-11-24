#include <stdio.h>
#include <string.h>
int main (){

    char op1[20];
    char op2[20];
    char op3[20];

    gets(op1);
    gets(op2);
    gets(op3);

    int retorno_vertebrado, retorno_invertebrado;

    retorno_vertebrado = strcmp(op1,"vertebrado");
    retorno_invertebrado = strcmp(op1,"invertebrado");

    int retorno_ave, retorno_mamifero;

    retorno_ave = strcmp(op2, "ave");
    retorno_mamifero = strcmp(op2,"mamifero");

    int retorno_inseto, retorno_anelideo;

    retorno_inseto = strcmp(op2, "inseto");
    retorno_anelideo = strcmp(op2,"anelideo");

    int retorno_carnivoro, retorno_ave_onivoro;

    retorno_carnivoro = strcmp(op3, "carnivoro");
    retorno_ave_onivoro = strcmp(op3,"onivoro");

    int retorno_mamifero_onivoro, retorno_mamifero_herbivoro;

    retorno_mamifero_onivoro = strcmp(op3, "onivoro");
    retorno_mamifero_herbivoro = strcmp(op3,"herbivoro");

    int retorno_inseto_hematofago, retorno_inseto_herbivoro;

    retorno_inseto_hematofago = strcmp(op3, "hematofago");
    retorno_inseto_herbivoro = strcmp(op3,"herbivoro");

    int retorno_anelideo_hematofago, retorno_anelideo_onivoro;

    retorno_anelideo_hematofago = strcmp(op3, "hematofago");
    retorno_anelideo_onivoro = strcmp(op3,"onivoro");

    //RETORNO DOS VERTEBRADOS
    if(retorno_vertebrado == 0 ){
     if(retorno_ave == 0){
        if(retorno_carnivoro == 0){
            printf("aguia\n");
        }
        else{
            if(retorno_ave_onivoro == 0){
                printf("pomba\n");
        }
        }
     }
     if(retorno_mamifero == 0){
        if(retorno_mamifero_onivoro==0){
            printf("homem\n");
        }else{
        if(retorno_mamifero_herbivoro == 0){
            printf("vaca\n");
        }
        }
     }

    }

    //RETORNO INVERTEBRADOS
    if(retorno_invertebrado == 0){
        if(retorno_inseto == 0){
            if(retorno_inseto_hematofago == 0){
                printf("pulga\n");
            }else{
            if(retorno_inseto_herbivoro == 0){
                printf("lagarta\n");
            }
            }
        }
        if(retorno_anelideo == 0){
            if(retorno_anelideo_hematofago == 0){
                printf("sanguessuga\n");
            }else{
            if(retorno_anelideo_onivoro == 0){
                printf("minhoca\n");
            }
            }

        }
    }


return 0;
}
