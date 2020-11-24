#include <stdio.h>

int main() {

   float valores[6];
   float media=0;
   int i, quantidade=0;

   for(i=0; i<6; i++){
    scanf("%f", &valores[i]);
    if(valores[i] >0){
        quantidade += 1;
        media += valores[i];
    }
   }
   printf("%d valores positivos\n", quantidade);
   printf("%.1f\n", media / quantidade);

    return 0;
}
