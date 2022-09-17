#include <stdio.h>
#include <stdlib.h>

/*int main(){

  int n1,n2;
  printf("Digite as medias: \n");
  scanf("%i %i",&n1,&n2);

  float media=(n1+n2)/2;

  if (media>=6)
  {printf("O aluno foi aprovado!! Parabens\n");}
  else
  {printf(" O aluno foi reprovado, estude mais seu caba!!");}
  
  return 0;
  }*/

/*int main(){

  char ch;

  printf("1. Opção a\n");
  printf("2. Opção b\n");
  printf("Faca a sua escolha:\n");

  ch=getchar();

  switch(ch){
    case '1':
      printf("Opçao 1 foi selecionada.\n");
      break;
    case '2':
      printf("Opçao 2 foi selecionada.\n");
      break;
    default:
      printf("nenhuma opçao foi selecionada.\n");
  }
  return 0;

}*/

/*int main(){

  int folhas;
  printf("Quantas folhas vc quer xerocar?\n");
  scanf("%i",&folhas);

  float copia;

  if (folhas<100)
  {copia=0.25;}
  else
  {copia=0.20;}

  printf("O total sera: %f\n",folhas*copia);
  return 0;
}*/

/*int main(){
  char categoria1[]="Infantil";
  char categoria2[]="juvenil";
  char categoria3[]="senior";

  int idade;
  printf("Qual a idade  do jogador? \n");
  scanf("%i",&idade);

  if (idade<=13)
     {printf("A categoia do jogador é:%s\n",categoria1);}
  else
    if (idade>13 && idade<=17)
      {printf("A CATEGORIA DO JOGADOR É: %s\n",categoria2);}
    else
      {printf(" A categoria do jogador é :%s\n",categoria3);}

    return 0;
}*/

/*int main(){

  int n1=10;
  int n2=3;

  if (n1>n2)
    {printf("O maior numero entre %i e %i é %i",n1,n2,n1);}
  else  
   {printf("O maior numero entre %i e %i é %i",n1,n2,n2);}

  return 0;
}*/

/*int main(){
  int n1,n2,n3;

  printf("Digite 3 numeros distintos: \n");
  scanf("%i %i %i",&n1,&n2,&n3);

  float media=(n1+n2+n3)/3;

  printf(" A media é igual a %f\n",media);
  return 0;
}*/

/*int main(){

  int n;

  printf("Digite um numero:\n");
  scanf("%i",&n);

  if (n%2==0){printf("eh Par.\n");}
  else {printf("Nao eh Par");}
  
  return 0;
}*/


/*int main(){

  int n;
  printf("Digite um numero qualquer:");
  scanf("%i",&n);

  if (n>100 && n<200) {printf("Seu numero esta entre 100 e 200");}
  else {printf("Seu numero nao esta entre 100 e 200");}
  return 0;
}*/

int main(){

  int magic=rand();
  int palpite;

  printf(" Tente advinhar o numero:");
  scanf("%i",&palpite);

  if (palpite==magic){
    printf("Voce acertou!!");
    printf("%i eh o número magico",magic);
  }
  else{
    printf("Vc errou!\n");
    if (palpite>magic)
      {printf("Muito alto!\n");}
    if (palpite<magic)
      {printf("Palpite muito baixo");}
  }

  return 0;

}
  
