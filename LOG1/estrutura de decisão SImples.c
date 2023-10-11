// estrutura de decisão simples
// comparando dois números
// tenho 3 oportunidades: maior, menor, iguais
#include <stdio.h>
main() // indica a difinição do programa
{//inicio
//declarações de variaveis:
int n1, n2; // linha de instrução termina com ;
printf("primeiro número: ");
scanf("%i",&n1);//o tipo %i ou%d - & indica o end de memoria
printf("primeiro segundo: ");
scanf("%i",&n2);//o tipo %i ou%d - & indica o end de memoria
if(n1>n2)
printf("O maior é o n1: %i", n1);
if(n2>n1)
printf("O maior é o n2: %i", n2);
if(n1==n2)
printf("Os números são iguais: n1 = %i e n2 =%i",n1, n2);
}//fim
