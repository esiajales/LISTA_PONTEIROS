#include <stdio.h>

int main(void){
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor); // resultado: 20, resposta esperada

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp); // resultado: 29.0, resposta esperada
  
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux); // resultado: P, resposta esperada

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux); // resultado: e, resposta esperada

  /* (e) */
  p3 = nome;
printf("%c \n", *p3); // resultado: P, resposta esperada, pois p3 não é um vetor então aparece apenas a 1 letra do array

  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3); // resultado: e, resposta esperada, pois ele caminhou 4 posições em relação ao array

  /* (g) */
  p3--;
  printf("%c \n", *p3); // resultado: t, resposta esperada, pois ele voltou 1 posição na array 

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade); // resultado: 31, resposta esperada, pois p4 recebe o primeiro valor do vetor

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade); // resultado: 45, resposta esperada, pois p5 caminhou 1 posição no vetor

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade); // resultado: 27, resposta esperada, pois p4 passa a ter o valor de p5, que era 45, mais 1 posição no vetor, resultando em 27.  

  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade); // resultado: 31, resposta esperada, pois p4 caminhou menos duas posições no vetor

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5); // resultado: 45, resposta esperada, pois p5 recebeu 27 e voltou uma posição no vetor. 

  /* (n) */
  printf("%d \n", *p5);
  return(0); // resultado: 45, resposta esperada
}
