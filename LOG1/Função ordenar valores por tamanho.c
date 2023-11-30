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



#include <stdio.h>
void linha2(); //sem retorno
int triplo(); //com retorno e sem parametro
int quadrado (int a);//com retorno e com parametro
main()
{   int x, y;
linha2();
	printf("Chamada da Função triplo()\n");
	printf("triplo do valor..: %d\n",triplo());
	linha2();
	printf("Chamada da Função quadrado()\n");
	printf("Informe um valor: "); scanf("%d",&x);
	printf("quadrado do valor: %d\n",quadrado(x));
	y = quadrado(5);
	printf("novo valor do quadrado: %d\n",y);
	linha2();
}
void linha2() //sem parâmetros
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
