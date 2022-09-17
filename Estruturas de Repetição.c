#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Função gets() para ler strings completos.
//função strcmp(string1,string2) compara duas strings.
//função getchar() ler um unico caractere.
//função toupper() transforma em maiusculo
//função putchar() imprime string,variavel
//COMANDOS DE DESVIO:
  //return- retorna a uma função
  //goto - desvia para outro trecho do programa. ex: goto rotulo.
  //continue - força a proxima interação do laço
  //exit(), sai do programa que esta sendo executado.
  //break, força o termino imediato

/*int main(){

  int contador=0;
  while(contador<5){
    printf("Amanda Diva.\n");
    contador++;
  }
  return 0;
}*/

/*int main(){
  int cont=0;
  char letra;

  while((letra=getchar()) !='q'){
    printf("Amanda Diva.\n");
    cont++;

  }
  printf("Repetiçoes = %i\n",cont);
  return 0;
}*/

/*int main(){
  int x; 
  int cont=0; 
  int total=0;
  char letra;

  do{
    printf("Digite um numero: \n");
    scanf("%i",&x);
    fflush(stdin);
    cont++;
    total+=x;
    printf("Digite uma letra:\n");
  } while((letra=getchar())!='q');

  printf("Parando...");
  printf("Repetioes =%i e total=%i\n",cont,total);
  return 0;

}*/

/*int main(){
  
  int a;
  
  do{
      printf("Digite um valor: \n");
      scanf("%i",&a);
      
  } while(a!=0);
  
  printf("Hello\n");
  
  return 0;
}*/

/*int main(){
  char senha[20];
  int x;
  for(x=1;x<=3;x++){
    printf("Digite a senha:  ");
    gets(senha);
    if (strcmp(senha,"Amanda")==0){
      printf("OK!\n");
      return 0;
      break;
    }
    else{
      printf("Tente novamente.\n");
    }
  }
  return 0.;
}*/

/*int main(){
  char minusculo,maiusculo;
  int cont=0;

  for(cont=1;cont<=10;cont++){
    minusculo=getchar();
    maiusculo=toupper(minusculo);
    putchar(maiusculo);
  }
  return 0;
}*/

int main(){
  char senha[7]="Amanda";
  int cont=3;

  for(int i=1;i<=cont;)
}