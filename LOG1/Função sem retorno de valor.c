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
