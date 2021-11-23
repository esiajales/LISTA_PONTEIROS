#include <stdio.h>
#include <stdlib.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t

void compare(float *sequencia, int elementos){ 
  int i, j;
  float tmp;
    for (i = 0; i < elementos; ++i){
    for (j = i + 1; j < elementos; ++j)
    {
        if (sequencia[i] > sequencia[j]){
            tmp =  sequencia[i];
            sequencia[i] = sequencia[j];
            sequencia[j] = tmp;
        }
    }
}
}

int main(void) {
  clock_t Ticks[2];
  Ticks[0] = clock();

  int n, i;
  void (*comp) (float*, int) = {compare}; 
  printf("Quantos números você deseja ter na sua ordem? ");
  scanf("%d", &n);

  float *x;
  x = malloc(n * sizeof(float));

  for(i=0; i<n; i++){ 
    printf("Digite o valor %d: ", i+1);
    scanf("%f", &x[i]);
  }

  (*comp) (x, n);

  printf("Seus números em ordem crescente são: \n");
  for (i=0; i<n; i++){
    printf ("%.1f -> ",x[i]);
  }
  printf("FIM.\n");
  
  free(x); 

  //O código a ter seu tempo de execução medido ficaria neste ponto.
  Ticks[1] = clock();
  double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
  printf("Tempo gasto: %g ms.", Tempo);
  getchar();
  return 0;
}
