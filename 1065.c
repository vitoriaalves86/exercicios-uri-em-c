#include <stdio.h>

int main() {

   int valores[5];
   int i, quantidade=0;

   for(i=0; i<5; i++){
    scanf("%d", &valores[i]);
    if(valores[i] % 2 == 0)
        quantidade += 1;
    }

   printf("%d valores pares\n", quantidade);

    return 0;
}
