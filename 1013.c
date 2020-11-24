#include <stdio.h>
#include <math.h>

int main(void){

    int a, b, c, maior;
    scanf("%d%d%d", &a, &b, &c);

    maior = (a + b + abs(a-b)) / 2;

    printf("eh o maior");



return 0;
}
