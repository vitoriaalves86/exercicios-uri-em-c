#include <stdio.h>
int main(){
    int n, i;
    float nota1, nota2, nota3, media, total;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%f%f%f", &nota1, &nota2, &nota3);
        total = nota1*2 + nota2*3 + nota3*5;
        media = total/10.0;
        printf("%.1f\n", media);

    }


return 0;
}
