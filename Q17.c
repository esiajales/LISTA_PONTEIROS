#include <stdio.h>
#include <stdlib.h>

void vetor_valores(int *vetor, int elementos){
  int i;
  for(i=0;i<elementos;i++){
    vetor[i]=0;
  }
  for(i=0;i<elementos;i++){
    printf("Valor %d: ", i+1);
    scanf("%d", &vetor[i]);
  }
  printf("--------------------\n");
}

void soma_vetores(int *vetor1, int *vetor2, int *vetor3, int elementos){
  int i;
  for(i=0;i<elementos;i++){
    vetor3[i]=vetor1[i]+vetor2[i];
  }
}

int main(void) {
  int *x, *y, *z, n;
  void (*atribuicao_vetores) (int*, int)={vetor_valores};
  void (*operacao_vetores) (int*, int*, int*, int) = {soma_vetores};

  printf("Digite quantos elementos seus vetores terão: ");
  scanf("%d", &n);

  x = malloc(n * sizeof(int));
  y = malloc(n * sizeof(int));
  z = malloc(n * sizeof(int));

  printf("A seguir, digite os elementos do vetor 1: \n");
  (*atribuicao_vetores) (x, n);

  printf("A seguir, digite os elementos do vetor 2: \n");
  (*atribuicao_vetores) (y, n);
  

  (*operacao_vetores) (x, y, z, n);

  printf("O resultado da soma dos vetores acima é: \n");
  for(int i=0; i<n; i++){
    printf("%d -> ", z[i]);
  }
  printf("FIM.");
  return 0;
}
