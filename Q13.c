#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, i, j;
  printf("Quantos números você deseja ter na sua ordem? ");
  scanf("%d", &n);

  float *x, tmp;
  x = malloc(n * sizeof(float));

  for(i=0; i<n; i++){
    printf("Digite o valor %d: ", i+1);
    scanf("%f", &x[i]);
  }

  for (i = 0; i < n; ++i){
    for (j = i + 1; j < n; ++j)
    {
        if (x[i] > x[j])
        {
            tmp =  x[i];
            x[i] = x[j];
            x[j] = tmp;
        }
    }
}
  printf("Seus números em ordem crescente são: \n");
  for(i=0; i<n; i++){
    printf("%.2f, ", x[i]);
  }

  return 0;
}
