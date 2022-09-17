#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*struct Aluno{
  int RA;
  char nome[30];
  float nota;
};*/

/*int main(){
  struct Aluno Amanda;
  printf("RA:\n");
  scanf("%i",&Amanda.RA);
  printf("Nota:\n");
  scanf("%f",&Amanda.nota);
  printf("Nome completo:\n");
  scanf("%s",&Amanda.nome);

  printf("Exibição dos dados do aluno: \n");
  printf("RA do aluno: %i\n",Amanda.RA);
  printf("Nota do aluno: %f\n",Amanda.nota);
  printf("Nome do aluno: %s\n",Amanda.nome);

  return 0;

}*/

/*struct CD{
  char titulo[30];
  int ano;
};

struct CD colecao[5];

int main(){
  
  colecao[0].ano=2020;
  strcpy(colecao[0].titulo, "BEYONCÉ");

  colecao[1].ano=2010;
  strcpy(colecao[1].titulo,"Formation");

  printf("%i\n",colecao[0].ano);
  printf("%s\n",colecao[0].titulo);

  printf("%i\n",colecao[1].ano);
  printf("%s\n",colecao[1].titulo);

  return 0;

}*/

/*typedef struct Pessoa{
  char nome[30];
  int idade;
  float salario;
};

void mostrar(struct Pessoa x){
  printf("Nome: %s\n",x.nome);
  printf("idade: %i\n",x.idade);
  printf("Nome: %f\n",x.salario);
}

int main(){
  struct Pessoa Amanda = {"Amanda",19,45000};
  mostrar(Amanda);

  return 0;

}*/


/*typedef struct Pessoa{
  char nome[30];
  int idade;
  float salario;
}PESSOA;

void mostrar(struct Pessoa x){
  printf("Nome: %s\n",x.nome);
  printf("idade: %i\n",x.idade);
  printf("Nome: %f\n",x.salario);
}

void ler(PESSOA *x){
  printf("Nome: %s\n");
  scanf("%s",&x->nome);
  printf("idade: %i\n");
  scanf("%i",&x->idade);
  printf("Nome: %f\n");
  scanf("%f",&x->salario);

}

int main(){
  struct Pessoa Amanda = {"Amanda",19,45000};
  mostrar(Amanda);
  ler(&Amanda);
  mostrar(Amanda);

  return 0;

}*/

/*struct Funcionario{
  int registro;
  float salario;
  char nome[30];
};

struct Funcionario Amanda;

int main(){
  printf("Digite o registro do funcionario: \n");
  scanf("%i",&Amanda.registro);

  printf("Digite o salario do funcionario: \n");
  scanf("%f",&Amanda.salario);

  printf("Digite o registro do funcionario: \n");
  scanf("%s",&Amanda.nome);

  printf("A estrutura é: \n");
  printf("Registro:%i\n",Amanda.registro);
  printf("salario:%f\n",Amanda.salario);
  printf("Nome:%s\n",Amanda.nome);

  return 0;
}*/


/*struct Carro{
  char marca[30];
  int ano;
  char cor[20];
  float preco; 
};

int main(){
  
  struct Carro carro;
  
  printf("Qual a marca do veiculo? \n");
  scanf("%s",carro.marca);
  printf("Qual o ano do veiculo? \n");
  scanf("%i",carro.ano);
  printf("Qual a cor do veiculo? \n");
  scanf("%s",carro.cor);
  printf("Qual o preço do veiculo? \n");
  scanf("%f",carro.preco);

  printf(" Os dados recebidos foram; \n");
  printf("Marca:%s \n",carro.marca);
  printf("Ano do carro:%i \n",carro.ano);
  printf("Cor:%s \n",carro.cor);
  printf("Preço:%f \n",carro.preco);

  return 0;
}*/

