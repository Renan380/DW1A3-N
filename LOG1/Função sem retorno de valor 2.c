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
