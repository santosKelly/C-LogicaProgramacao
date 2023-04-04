#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i, numero, anterior1 = 1, anterior2 = 0, atual;

  printf("Informe um número para iniciar a sequência: ");
  scanf("%d", &numero);

  printf("Série de Fibonacci: %d %d", anterior2, anterior1);

  for (i = 3; i <= numero; i++) {
    atual = anterior1 + anterior2;
    printf(" %d", atual);
    anterior2 = anterior1;
    anterior1 = atual;
  }

  printf("\n");

}
