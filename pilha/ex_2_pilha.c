#include <stdio.h>
#include <stdlib.h>
#include "est-pilha.h"
// pilha.h - implementacao dinamica sequencial de pilha

int main(void){
  Pilha A = pilha(10);
  Pilha B = pilha(10);
  int x;
  
  printf("Digite um numero e tecle 'enter'\nDigite '0' para terminar,vc pode inserir ate 10 numeros\n");
  do{
    printf("Numero: ");
    scanf("%d",&x);
    empilha(x, A);
  }while(x != 0);
  
  for(int i=0; !vaziap(A);i++){
    if(A -> item[i] < A -> item[i-1]) {}
  }
  return 0;
}