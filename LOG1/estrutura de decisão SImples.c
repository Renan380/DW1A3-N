// estrutura de decis�o simples
// comparando dois n�meros
// tenho 3 oportunidades: maior, menor, iguais
#include <stdio.h>
main() // indica a difini��o do programa
{//inicio
//declara��es de variaveis:
int n1, n2; // linha de instru��o termina com ;
printf("primeiro n�mero: ");
scanf("%i",&n1);//o tipo %i ou%d - & indica o end de memoria
printf("primeiro segundo: ");
scanf("%i",&n2);//o tipo %i ou%d - & indica o end de memoria
if(n1>n2)
printf("O maior � o n1: %i", n1);
if(n2>n1)
printf("O maior � o n2: %i", n2);
if(n1==n2)
printf("Os n�meros s�o iguais: n1 = %i e n2 =%i",n1, n2);
}//fim
