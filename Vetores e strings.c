#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//função strlen() conta o tamanho da string.
//putchar()printa a string.
//gets() lê uma string.
//strcpy() copia uma string em outra.
//strcat() adiciona o conteudo de uma string em outra
//strlwr() converte conteudo para minusculas
//strupr() converte conteudo em maiusculas
//strcmp() compara duas strings.
//atof() converte string para um valor real.
//atoi() converte string para valor inteiro.

/*void inicializa(int s[10]){
  int i;
  for(i=0;i<10;i++){
    s[i]=0;
  }
}

void mostra(int s[10]){
  int i;
  for (i=0;i<10;i++){
    printf(", %i",s[i]);
  }
  printf("|");
  printf("\n");
}

int main(){
    int v[10];
    inicializa(v);
    mostra(v);

    return 0;
  }*/

/*int main(){
  char frase[20];
  int i;
  for(i=0;i<20;i++){
    frase[i]='a'+i;
  }
  frase[i]= NULL;
  printf("A string contem %s\n",frase);
  return 0;
}*/

/*int main(){
  char string[10];
  int i;
  printf("Digite um conjunto de caracteres: \n");
  gets(string);
  for(i=0;string[i]!=NULL;i++){
    putchar(string[i]);
  }
  printf("\n");
  printf("O numero de caracteres é %i\n",i);
  
  return 0;
  }*/

/*int main(){
  char declaração[]="AMANDA AMA ARTHUR";
  printf("%s contem %d caracteres.",declaração,strlen(declaração));
  
  return 0 ;
  }*/

/*int main(){
  char x[10], y[10];
  printf("Digite a primeira string: \n");
  gets(x);
  printf("Digite a segunda string: \n");
  gets(y);
  if(strcmp(x,y)==0)
    printf("Iguais.\n");
  else
    printf("Sao diferentes.\n");

  return 0;
}*/

int main(){
  int aluno[3][5];
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<5;j++){
      printf("Aluno[%i][%i] : aluno[i][j]\n",i,j,aluno[i][j]);
    }
  }
  return 0;
}