/* Programa Calculadora */
#include <stdio.h>
#include <conio.h>
float R, A, B;
void rotadicao(void); //prot�tipo ou cabe�alho da fun��o
void rotsubtracao(void);
void rotmultiplicacao(void);
void rotdivisao(void);
int main(void)
{
char TECLA;
int OPCAO = 0;
while (OPCAO != 5)
{
printf("\n\nMenu Principal\n");
printf("--------------\n\n");
printf("1 - Adicao\n");
printf("2 - Subtracao\n");
printf("3 - Multiplicacao\n");
printf("4 - Divisao\n");
printf("5 - Fim de Programa\n\n");
printf("Escolha uma opcao: "); 
fflush(stdin); scanf("%d", &OPCAO);
if (OPCAO != 5)
{
	if (OPCAO == 1)
		rotadicao();
	if (OPCAO == 2)
		rotsubtracao();
	if (OPCAO == 3)
		rotmultiplicacao();
	if (OPCAO == 4)
		rotdivisao();
}
}

}
//declara��es das fun��es
void rotadicao(void)
{ 
char TECLA;
printf("\n\nRotina de Soma\n");
printf("--------------\n\n");
printf("Entre um valor para A: ");
fflush(stdin); scanf("%f", &A);
printf("Entre um valor para B: ");
fflush(stdin); scanf("%f", &B);
R = A + B;
printf("\nSoma = %6.2f\n", R);
printf("\nTecle <Enter> para acessar o menu: ");
fflush(stdin);
while ((TECLA = getchar()) != '\r')  //carriage return <enter>
return(0);
}
void rotsubtracao(void)
{ char TECLA;
printf("\n\nRotina de Subtracao\n");
printf("-------------------\n\n");
printf("Entre um valor para A: ");
fflush(stdin); scanf("%f", &A);
printf("Entre um valor para B: ");
fflush(stdin); scanf("%f", &B);
R = A - B;
printf("\nSubtracao = %6.2f\n", R);
printf("\nTecle <Enter> para acessar o menu: ");
fflush(stdin);
while ((TECLA = getchar()) != '\r')
return(0);
}
void rotmultiplicacao(void)
{
char TECLA;
printf("\n\nRotina de Multiplicacao\n");
printf("-----------------------\n\n");
printf("Entre um valor para A: ");
fflush(stdin); scanf("%f", &A);
printf("Entre um valor para B: ");
fflush(stdin); scanf("%f", &B);
R = A * B;
printf("\nMultiplicacao = %6.2f\n", R);
printf("\nTecle <Enter> para acessar o menu: ");
fflush(stdin);
while ((TECLA = getchar()) != '\r')
return(0);
}
void rotdivisao(void)
{
char TECLA;
printf("\n\nRotina de Divisao\n");
printf("-----------------\n\n");
printf("Entre um valor para A: ");
fflush(stdin); scanf("%f", &A);
printf("Entre um valor para B: ");
fflush(stdin); scanf("%f", &B);
if (B == 0)
printf("\nErro de divisao\n");
else
{
R = A / B;
printf("\nDivisao = %6.2f\n", R);
}
printf("\nTecle <Enter> para acessar o menu: ");
fflush(stdin);
while ((TECLA = getchar()) != '\r')
return(0);
}

ESCREVA UMA FUN��O COM PASSAGEM DE PARAMETROS QUE RETORNE DOIS NUMEROS
EM ORDEM CRESCENTE. SE O PRIMEIRO FOR MAIOR QUE O SEGUNDO ELES DEVEM TROCAR DE 
POSI��O. A TROCA DEVE SER FEITA SEM O USO DE UMA TERCEIRA VARI�VEL.




//criar uma fun��o sem retorno de valor
#include <stdio.h>
//cabe�alhos da fun��o
void linha2();
void dobro();
void soma(int a, int b); //par�metros
main()
{ int x, y;
  //chamada da fun��o
  linha2();
  dobro();
  linha2();
  printf("Informe o 1� valor: "); scanf("%d",&x);
  printf("Informe o 2� valor: "); scanf("%d",&y);
  soma(x,y); //chamada da fun��o
  linha2();
}
//desenvolvimento da fun��o
void linha2() //sem par�metros
{
 printf("=============================\n");
}
void dobro()
{
  int a;
  printf("informe um valor: ");
  scanf("%d",&a);
  printf("dobro do valor..: %d\n",a*2);
}

void soma(int a, int b)
{ int sum;
  sum = a+b;
  printf("Soma dos valores: %i\n",sum);
}





 
