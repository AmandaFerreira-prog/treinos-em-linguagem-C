#include <stdio.h>
#include <stdlib.h>

/*int main(){
  int x=8;
  int *p=&x;
  printf(" Valor de X:%i\n",x);
  printf(" Valor de x acessado pelo ponteiro: %d\n",*p);
  printf("Valor do ponteiro p= %p\n",p);
  return 0;
}*/

/*int main(){
  int valor=8;
  int *pont=&valor;

  printf("O valor de x eh:%i\n",valor);
  printf("O endereço de x eh: %p\n",&valor);
  printf("O valor do ponteiro eh: %p\n",pont);
  printf("o endereço do ponteiro eh: %p\n",&pont);
  printf("O valor de x acessado pelo ponteiro é : %p\n",*pont);

  return 0;
}*/

/*int main(){
  
  int x,*p,**q;
  x=10;
  p=&x;
  q=&p;

  printf("Valor atribuido a x = %d\n",x);
  printf("Valor de x, acassado pelo ponteiro duplo = %d\n",**q);

  return 0;
}*/

/*int main(){
  char *banda[]={"Beatles","Smiths","u2","led zepelin"};
  char **aponta_banda;

  aponta_banda=banda;

  while(*aponta_banda){
    printf("%s\n",*aponta_banda);
    aponta_banda++;
  }
  return 0;
}*/

/*int main(){
  char s[]="Fatec";
  char *ptr=s;
  int i;
  while(i<5){
    printf("Vetor[%i]: %c \n",i,*(ptr+i));
    i++;
  }
  return 0;
}*/

/*int main (){
  char nome[30]="Fatec Americana";
  char *ptr_str;

  ptr_str=nome;
  printf("A string eh referencia por %c\n",*ptr_str);
  printf("A string exibida via ponteiro eh: \n");

  while(*ptr_str){
    putchar(*ptr_str);
    ptr_str++;
  }

  return 0;

}*/

/*struct pessoa{
  char nome[30];
  int idade;
};

void alteracao(struct pessoa *acesso){
  acesso->idade+=20;
}

int main(){
  struct pessoa acesso;
  printf("Nome: \n");
  scanf("%s",&acesso.nome);
  acesso.idade=19;

  printf("Dados iniciais: \n");
  printf("Nome:%s",acesso.nome);
  printf("Idade: %i\n",acesso.idade);

  alteracao(&acesso);
  
  printf("Dados finais: \n");
  printf("Nome:%s",acesso.nome);
  printf("Idade: %i\n",acesso.idade);

   return 0;

}*/

/*int main(){
  char *dia[]={"Domingo","Segunda","Terca","Quarta","Quinta","Sexta","Sabado"};
  char **ptr_dia;

  ptr_dia=dia;

  while(*ptr_dia){
    printf("%p\n",*ptr_dia);
    ptr_dia++;
  }
  return 0;
}*/

//Alocação de memoria;

/*int main(){
  int *p;
  p=(int*) malloc(sizeof(int));

  if(!p){printf("Memoria insuficiente\n");}
  else {printf("Memoria alocada com sucesso!!\n");}

  printf("Liberando memoria...\n");
  free(p);
  printf("Memoria liberada com sucesso..\n");

  return 0;
}*/

/*int main(){
  char *str;
  str=(char*) malloc(50);

  if(str){printf("50 bytes alocados\n");}
  else {printf("Erro de alocacao de memoria");}

  realloc(str,500);

  if(str){printf("500 bytes foram realocados alocados\n");}
  else {printf("Erro de alocacao de memoria\n");}

  return 0;
}*/

/*int main(){
  int x=10;
  int *pont=&x;

  float y=2.3;
  float *p=&y;

  printf("%f",*p);
  return 0;
}*/

/*int main(){
  
  int contador = 10, *temp,soma=10;
  temp=&contador;
  *temp=20;
  temp=&soma;
  *temp=contador;

  printf("Contador=%d, *temp=%d,soma=%d\n",contador,*temp,soma);

  return 0;
}*/


/*int main(){
  char nome[]="FATEC";
  char *escola=&nome;

  printf("%p\n",escola);
  
  while(*escola){
    printf("%s",*escola);
    escola++;
  }

  return 0;

}*/

/*int main(){

  char c='T', d='S';
  char *p1=&c;
  char *p2=&d;
  char *p3;

  p3=&d;
  printf("%c\n",*p3);
  p3=p1;
  printf("%c\n",*p3);
  *p1=*p2;
  printf("%c\n",*p1);

  return 0;
}*/

/*int main(){
  int *p;
  int i;
  int k;
  i=42;
  k=i;
  p=&i;

  k=75;
  printf("%i\n",i);
  *k=75;
  printf("%i\n",i);
  p=75;
  printf("%i\n",i);
  *p=75; //Apenas esse muda a variavel I;
  printf("%i\n",i);

  return 0 ;
}*/

//algoritmo para troca de posiçoes entre vetores

/*void troca(int *pa,int*pb){
  int t;
  t=*pa;  
  *pa=*pb; 
  *pb=t;
}

int main(){
  int x[5]={0,1,2,3,4};
  troca(x+1,x+4);

  for(int i=0;i<5;i++){
    printf("%i\n",x+i);
  }

  return 0;

}*/