#include <stdio.h> // Uso da função printf e scanf
#include <stdlib.h> // uso do qsort() e do malloc()


int comparefloat (const void * a, const void * b) //comparação dos valores com o tipo float
{
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

int main (){ // inicio do código main
  clock_t Ticks[2];
  Ticks[0] = clock();
  int n, i; // declaração de variáveis
  printf("Quantos números você deseja ter na sua ordem? ");
  scanf("%d", &n); // aqui declara quantos números terão na sequencia

  float *x; // aqui declara o ponteiro float
  x = malloc(n * sizeof(float)); // aqui aloca a memória de acordo com o tamanho pedido

  for(i=0; i<n; i++){ // aqui inicia o laço para a declaração de valores no vetor
    printf("Digite o valor %d: ", i+1);
    scanf("%f", &x[i]);
  }

  qsort (x, n, sizeof(float), comparefloat); // aqui utilizamos da função qsort() para chamar a função comparefloat já escrita lá em cima
  for (i=0; i<n; i++){ // aqui imprime os valores já ordenados na tela
    printf ("%.1f ",x[i]);
  }

  free(x); // aqui libera a memória alocada anteriormente
  return 0;
}
