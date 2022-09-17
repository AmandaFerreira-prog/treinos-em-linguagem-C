#include <stdio.h>
#include <stdlib.h>

/*int soma(int a,int b){
    int resultado;
  resultado = a+b;
  return resultado;
}
  

int main(){
  int x, y;
  printf(" Digite um numero.\n ");
  scanf("%i",&x);
  printf(" Digite um numero.\n ");
  scanf("%i",&y);
  printf(" A soma entre %i e %i é igual a %i\n",x,y,soma(x,y));

  return 0;
  }*/

/*int diferenca(int a , int b){
  return a-b;
}

int main(){
  int x, y;
  printf(" Digite dois numeros\n");
  scanf("%i %i",&x,&y);

  printf(" A diferença entre %i e %i é igual a %i\n",x,y,diferenca(x,y));

  return 0;
}*/

/*int maior(int a, int b){
  if (a>b){
    return a;
  }
  else
    return b;
}

int main(){
  int x,y;
  printf(" Digite dois numeros\n");
  scanf("%i %i ",&x,&y);

  printf(" O maior numero entre %i e %i é igual a %i\n",x,y,maior(x,y));

  return 0;
}*/

//Funçao sem alterar o valor da variavel;

/*int valor(int a, int b){
  a+=1;
  b+=1;
  printf("Valor 1: %i\n",a);
  printf("Valor 2: %i\n",b);
}
int main(){
  int n1=1;
  int n2=2;

  printf("Valores antes da função: %i %i\n",n1,n2);
  valor(n1,n2);
  printf("Valores apos a função: %i %i\n",n1,n2);

  return 0;
}*/

//função alterando a variavel.

/*int valor(int *a, int *b){
  *a+=1;
  *b+=1;
  printf("Valor 1: %i\n",*a);
  printf("Valor 2: %i\n",*b);
}

int main(){
  int n1=1;
  int n2=2;

  printf("Valores antes da função: %i %i\n",n1,n2);
  valor(&n1,&n2);
  printf("Valores apos a função: %i %i\n",n1,n2);

  return 0;
}*/

/*int swap(int *x,int*y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

int main(){
  int x=10;
  int y=20;

  printf(" Valores antes da função: %i %i \n",x,y);
  swap(&x,&y);
  printf(" Valores depois da função: %i %i \n",x,y);
  
  return 0;
}*/

/*int fatorial(int valor){
  if (valor==1){
    return (1);
  }
  else {
    return(valor*fatorial(valor-1));
  }
}

int main(){
  int i;
  for(i=0;i<=5;i++){
    printf("O fatorial de %i é igual a :%i.\n",i,fatorial(i));
  }

  return 0;
}*/

/*int cubo(int a){
  int cubo=pow(a,3);
  return cubo;
}

int main(){
  int x=10;
  printf("O cubo de %i é igual a %i\n",x,cubo(x));

  return 0;
}*/


