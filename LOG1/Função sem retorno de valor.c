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
