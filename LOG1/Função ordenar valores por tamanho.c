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



#include <stdio.h>
void linha2(); //sem retorno
int triplo(); //com retorno e sem parametro
int quadrado (int a);//com retorno e com parametro
main()
{   int x, y;
linha2();
	printf("Chamada da Fun��o triplo()\n");
	printf("triplo do valor..: %d\n",triplo());
	linha2();
	printf("Chamada da Fun��o quadrado()\n");
	printf("Informe um valor: "); scanf("%d",&x);
	printf("quadrado do valor: %d\n",quadrado(x));
	y = quadrado(5);
	printf("novo valor do quadrado: %d\n",y);
	linha2();
}
void linha2() //sem par�metros
{
 printf("=============================\n");
}
int triplo()
{
	int a;
	printf("Informe um valor: "); 
	scanf("%i",&a);
	return (a*3);
}
int quadrado (int a)
{
  return a*a;	
}
