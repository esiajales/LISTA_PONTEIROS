#include <stdio.h>
#include <stdlib.h>

void compare(float *sequencia, int elementos){ // aqui é a função comparação, ela vai receber o ponteiro para função com os valores e o número de elementos
  int i, j; // aqui começa a declaração de variáveis para os laços de repetições
  float tmp; // essa variável vai auxiliar na ordenação de valores
    for (i = 0; i < elementos; ++i){
    for (j = i + 1; j < elementos; ++j)
    {
        if (sequencia[i] > sequencia[j]) // dentro desse laço condicional a ordenação ocorre
        {
            tmp =  sequencia[i];
            sequencia[i] = sequencia[j];
            sequencia[j] = tmp;
        }
    }
}
}

int main(void) { // inicio do codigo main
  int n, i; // variáveis para numero de elementos e laços de repetição
  void (*comp) (float*, int) = {compare}; // declaração da função que liga a função compare
  printf("Quantos números você deseja ter na sua ordem? "); // aqui declara quantos elementos terá seu vetor
  scanf("%d", &n);

  float *x;
  x = malloc(n * sizeof(float)); // aqui aloca a memória, construindo o vetor de acordo com o numero de elementos informados

  for(i=0; i<n; i++){ // aqui o usuário irá informar os valores a serem ordenados
    printf("Digite o valor %d: ", i+1);
    scanf("%f", &x[i]);
  }

  (*comp) (x, n); // aqui chama a função para ordenar os valores

  printf("Seus números em ordem crescente são: \n");
  for (i=0; i<n; i++){ // esse laço é responsável por imprimir na tela os valores ordenados
    printf ("%.1f -> ",x[i]);
  }
  printf("FIM.");
  
  free(x); // aqui libera a memória alocada
  return 0;
}
