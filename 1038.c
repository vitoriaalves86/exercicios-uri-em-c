#include <stdio.h>

int main (){
    int codigo, quantidade;
    double total;
    scanf("%d %d", &codigo, &quantidade);

    if(codigo == 1){
        total = quantidade * 4.00;
        printf("Total: R$ %.2lf\n", total);
    }else{
        if(codigo == 2){
            total = quantidade * 4.50;
            printf("Total: R$ %.2lf\n", total);
        }else{
            if(codigo == 3){
                total = quantidade * 5.00;
                printf("Total: R$ %.2lf\n", total);
            }else{
                if(codigo == 4){
                    total = quantidade * 2.00;
                    printf("Total: R$ %.2lf\n", total);
                }else{
                    total = quantidade * 1.50;
                    printf("Total: R$ %.2lf\n", total);
                }

            }

        }

    }



return 0;
}

