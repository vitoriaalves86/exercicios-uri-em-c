#include <stdio.h>

int main (void){

    int num, in=0, out=0;
    scanf("%d", &num);
    int valores[num];
    int i;

    for(i=0; i<num; i++){
        scanf("%d", &valores[i]);
    if(valores[i] >= 10 && valores[i] <= 20)
        in += 1;
    else
        out += 1;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
return 0;
}
