#include <stdio.h>

int main(){
    float salario, novo_salario, reajuste;
    scanf("%f", &salario);

    if(salario <=400.0){
        novo_salario = salario + salario * 1.15;
        reajuste = novo_salario - salario;
        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %%");
    }else{
        if( salario <=800.00){
        novo_salario = salario + salario * 1.12;
        reajuste = novo_salario - salario;
        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%");
   } else{
    if(salario <=1200.00){
        novo_salario = salario + salario * 1.10;
        reajuste = novo_salario - salario;
        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %%");
    }else{
        if(salario <=2000.00){
        novo_salario = salario + salario * 1.07;
        reajuste = novo_salario - salario;
        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 7 %%");
    }else{
        novo_salario = salario + salario * 1.04;
        reajuste = novo_salario - salario;
        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %%");
                }
            }
        }
    }
    return 0;
}

