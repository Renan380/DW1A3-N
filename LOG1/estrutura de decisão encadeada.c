/*
Fazer o algoritmo e o programa Pascal que efetuem o c�lculo do reajuste de
sal�rio de um funcion�rio. Considere que o funcion�rio dever� receber um
reajuste de 15% caso o seu sal�rio seja menor que 500,00. Se o sal�rio for
maior ou igual a 500,00 mas menor ou igual a 1000,00, o reajuste ser� de
10%. Caso o sal�rio seja maior que 1000,00, o reajuste ser� de 5%.
Informar no final o novo sal�rio.*/

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

