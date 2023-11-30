//função com retorno de valor
#include <stdio.h>
//protótipo da função
void ordena(float A, float B);

main()
{ float A1, B1;
 printf("\nNúmeros Ordenados\n");
 printf("--------------\n\n");
 printf("Entre um valor para A1: ");
 scanf("%f", &A1);
 printf("Entre um valor para B1: ");
 scanf("%f", &B1);
 ordena(A1,B1);	

}
//definições/descrição das funções:
void ordena(float A, float B)
{
  if (A > B)
   {
   	A=A+B;
   	B=A-B;
   	A=A-B;
   	printf("Primeiro valor: %6.2f\n",A);
   	printf("Segundo  valor: %6.2f\n",B);
   }
}
