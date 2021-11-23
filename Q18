#include <stdio.h>
#include <stdlib.h>

void atribuicao_matriz(int **matriz, int linhas, int colunas){
  int l, c;
    for (int l = 0; l < linhas; l++){
      for (int c = 0; c < colunas; c++){
        matriz[l][c] = 0;
    }
  }

  for (int l = 0; l < linhas; l++){
    for (int c = 0; c < colunas; c++){
    printf("Linha %d, coluna %d: ", l+1, c+1);
    scanf("%d", &matriz[l][c]);
    }
    printf("---------------------\n");
  }
    printf("\n");
}

void operacao_matriz(int **matriz1, int **matriz2, int**matriz3, int cAlB, int lA, int cB){
  int l, c;
  for (int l = 0; l < lA; l++){
    for (int c = 0; c < cB; c++){
      for (int lc = 0; lc < cAlB; lc++){
        matriz3[l][c] += (matriz1[l][lc] * matriz2[lc][c]);
      }
    }
  }
}

int main() {
  void (*valores) (int**, int, int) = {atribuicao_matriz};
  void (*multiplicacao) (int**, int**, int**, int, int, int) = {operacao_matriz};
  int **x, nl1, **y, nc2, **z, ncAlB;

  printf("Obs.: O número de linhas da matriz A definirá o número de colunas da matriz B, pois eles precisam ser iguais para que a multiplicação possa acontecer\n\n");

  printf("Matriz A \n");
  printf("Quantas linhas sua matriz terá? ");
  scanf("%d", &nl1);

  printf("Quantas colunas terá sua matriz? ");
  scanf("%d", &ncAlB);

  x = malloc(nl1*sizeof(int*));
  x[0] = malloc(ncAlB*nl1*sizeof(int));
  for(int i=1;i<nl1;i++){
    x[i] = x[i-1]+ncAlB;
  }

  (*valores) (x, nl1, ncAlB);


  printf("Matriz B \n");
  printf("Quantas colunas terá sua matriz? ");
  scanf("%d", &nc2);

  y = malloc(ncAlB*sizeof(int*));
  y[0] = malloc(nc2*ncAlB*sizeof(int));
  for(int i=1;i<ncAlB;i++){
    y[i] = y[i-1]+ncAlB;
  }

  (*valores) (y, ncAlB, nc2);

  z = malloc(nl1*sizeof(int*));
  z[0] = malloc(nc2*ncAlB*sizeof(int));
  for(int i=1;i<nl1;i++){
    z[i] = z[i-1]+nc2;
  }

  for (int l = 0; l < nl1; l++){
      for (int c = 0; c < nc2; c++){
        z[l][c] = 0;
    }
  }

  (*multiplicacao) (x, y, z, ncAlB, nl1, nc2);

  printf("Matriz C = AB\n");
  for (int l = 0; l < nl1; l++){
    for (int c = 0; c < nc2; c++){
      printf("%d ", z[l][c]);
    }
    printf("\n");  
  }


  free(x[0]);
  free(x);

  free(y[0]);
  free(y);

  free(z[0]);
  free(z);
  return 0;
}
