/* Programa Calculadora */
#include <stdio.h>
#include <conio.h>
float R, A, B;
void rotadicao(void); //protótipo ou cabeçalho da função
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
//declarações das funções
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

ESCREVA UMA FUNÇÃO COM PASSAGEM DE PARAMETROS QUE RETORNE DOIS NUMEROS
EM ORDEM CRESCENTE. SE O PRIMEIRO FOR MAIOR QUE O SEGUNDO ELES DEVEM TROCAR DE 
POSIÇÃO. A TROCA DEVE SER FEITA SEM O USO DE UMA TERCEIRA VARIÁVEL.




//criar uma função sem retorno de valor
#include <stdio.h>
//cabeçalhos da função
void linha2();
void dobro();
void soma(int a, int b); //parâmetros
main()
{ int x, y;
  //chamada da função
  linha2();
  dobro();
  linha2();
  printf("Informe o 1º valor: "); scanf("%d",&x);
  printf("Informe o 2º valor: "); scanf("%d",&y);
  soma(x,y); //chamada da função
  linha2();
}
//desenvolvimento da função
void linha2() //sem parâmetros
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





 
