/**
 * Usando pilha, crie uma função para verificar se uma expressão composta apenas
 * por chaves, colchetes e parênteses, representada por uma cadeia, está ou não
 * balanceada. Por exemplo, as expressões "[{()()}{}]" e "{[([{}])]}"
 * estão balanceadas, mas as expressões " {[(}])" e " {[)()(]}" não estão.
 */

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void){
  int n, x;
  Pilha A = pilha(256);
  Pilha B = pilha (256);
  printf("Informe o tamanho da lista: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Informe o %do. item da lista: ", i+1);
    scanf("%d", &x);
    if(vaziap(A)) empilha(x, A);
    else if(A->item[A->topo] > x) empilha(x, A);
    else {
      while (A->item[A->topo] < x && !vaziap(A)) empilha(desempilha(A), B);
      empilha(x, A);
      while (!vaziap(B)) empilha(desempilha(B), A);
    }
  };
  while (!vaziap(A)) printf("%d ", desempilha(A));
  destroip(&A);
  destroip(&B);
  return 0;
}
