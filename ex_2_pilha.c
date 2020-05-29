#include <stdio.h>
#include <stdlib.h>
#include "est-pilha.h"

int main(void){
  Pilha A = pilha(50);
  Pilha B = pilha(50);
  int x =1;
  printf("Digite um numero e tecle 'enter'\nDigite '0' para terminar,vc pode inserir ate 50 numeros");
  while(x !=0){
    printf("Numero: ");
    scanf("%d",&x);
    empilha(x,A);
  }

}