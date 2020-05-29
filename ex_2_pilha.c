#include <stdio.h>
#include <stdlib.h>
#include "est-pilha.h"

int main(void){
  Pilha A = pilha(10);
  Pilha B = pilha(10);
  int x = 1;
  printf("Digite um numero e tecle 'enter'\nDigite '0' para terminar,vc pode inserir ate 10 numeros");
  while(x != 0){
    printf("Numero: ");
    gets(x);
    empilha(x,A);
  }

}