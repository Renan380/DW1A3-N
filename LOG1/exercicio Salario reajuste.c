

#include <stdio.h>
main() {
float salario, reajuste;

printf("Digite o sal�rio do funcion�rio: ");
scanf("%f",&salario);
if (salario < 500){
	reajuste = salario + salario *0.15;
}
if (salario >= 500 && salario <= 1000){
	reajuste = salario + salario *0.10;
}
if (salario > 1000){
	reajuste = salario + salario *0.05;
}
printf("O novo salario � %.2f", reajuste);
}

