#include <stdio.h>

int main (){
    int numeros [100];
    int i, maior_numero;
    for( i=0; i<100; i++){
        scanf("%d", &numeros[i]);
        if(i == 0 ){
            maior_numero = numeros[0];
        }
        else{
            if(numeros[i] > maior_numero){
                maior_numero = numeros[i];
            }
        }
        if(numeros[i] == 0){
            break;
        }
    }
    printf("%d\n", maior_numero);


    return 0;

}
