/*
Fazer o algoritmo e o programa Pascal que efetuem o cálculo do reajuste de
salário de um funcionário. Considere que o funcionário deverá receber um
reajuste de 15% caso o seu salário seja menor que 500,00. Se o salário for
maior ou igual a 500,00 mas menor ou igual a 1000,00, o reajuste será de
10%. Caso o salário seja maior que 1000,00, o reajuste será de 5%.
Informar no final o novo salário.*/

#include <stdio.h>
main() {
float salario, reajuste;

printf("Digite o salário do funcionário: ");
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
printf("O novo salario é %.2f", reajuste);
}

