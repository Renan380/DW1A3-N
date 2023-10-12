#include <stdio.h>
main() {
float salario, INSS, salarioNovo, IR, salarioLiquido;

printf("Digite o salário: ");
scanf("%f",&salario);

if (salario <= 1320){
	INSS = 0.075 * salario;
}
else
    if (salario >= 1320 && salario <= 2571.29){
       	INSS = 0.09 * salario;
}
else
    if (salario >= 2571.29 && salario <= 3856.94){
       	INSS = 0.12 * salario;
}
else
    if (salario >= 3856.94 && salario <= 7507.49){
       	INSS = 0.14 * salario;
    }
else{
	INSS = 0.14 * 7507.49;
}
    salarioNovo = salario - INSS;
    
    if(salarioNovo <=1903.98){
    	IR = 0;
	}
	else
	if(salarioNovo >1903.99 && salarioNovo <=2826.65){
		IR = 0.075 * salarioNovo;
	}
	else
	if(salarioNovo >2826.66 && salarioNovo <=3751.05){
		IR = 0.15 * salarioNovo;
	}
	else
	if(salarioNovo >3751.06 && salarioNovo <=4664.68){
		IR = 0.225 * salarioNovo;
	}
	else
	if(salarioNovo >=4664.69){
		IR = 0.275 * salarioNovo;
	}
	salarioLiquido = salarioNovo-IR;
	
printf("Salario Bruto: %.2f\n", salario);
printf("Desconto do INSS: %.2f\n", INSS);
printf("Imposto de Renda: %.2f\n", IR);
printf("Salario Liquido: %.2f\n", salarioLiquido);
}

