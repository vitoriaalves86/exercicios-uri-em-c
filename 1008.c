#include <stdio.h>


int main (void){

int num, horas;
float valor_horas, salario;

printf("Digite o seu n�mero: ");
scanf("%d", &num);

printf("Digite o n�mero de horas trabalhadas: ");
scanf("%d", &horas);

printf("Digite o valor que recebe por horas trabalhadas: ");
scanf("%f", &valor_horas);

salario = horas * valor_horas;


printf("Number = %d\n", num);
printf("Salary = U$ %.2f\n", salario);


    return 0;
}
