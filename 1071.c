#include <stdio.h>

int main() {

    int x, y, i, soma=0, auxiliar;
    scanf("%d %d", &x, &y);

    if(x > y){
        auxiliar = x;
        x = y;
        y = auxiliar;
    }
    for(i=x+1; i<y; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);


    return 0;
}
