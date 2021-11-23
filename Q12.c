#include <stdio.h>
#include <string.h>

void nome_curto(int a){
  printf("Seu nome tem apenas %d letras, ele é muito curto", a);
}

void nome_medio(int a){
  printf("Seu nome tem %d letras, ele é normal", a);
}

void nome_grande(int a){
  printf("Seu nome tem %d letras, ele é bem grande", a);
}

int main(void) {
  void (*funcao_nome[3]) (int) = {nome_curto, nome_medio, nome_grande};
  char nome [100];

  printf("Qual seu nome? ");
  scanf("%s", nome);

  int tamanho = strlen(nome);
  int opcao;

    if (tamanho < 6){
      opcao = 0;
    } else if(tamanho < 7){
      opcao = 1;
    } else {
      opcao = 2;
    }

  (*funcao_nome[opcao]) (tamanho);

  return 0;
}
